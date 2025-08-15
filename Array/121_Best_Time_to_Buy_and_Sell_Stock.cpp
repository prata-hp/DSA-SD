#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

#define INT_MAX 999999;


// MY ANSWER -INEFFICIENT
int maxProfit(vector<int> &prices){
    int n= prices.size();
    vector <int> prophit;
    int buy=INT_MAX;
    int sell,profit;
    
    for (int i = 0; i < n; i++)
    {
        if(prices[i]<buy){
            buy=prices[i];
            sell = buy;
        }
        if (prices[i]>buy && prices[i]>sell)
        {
           sell = prices[i];
           profit = sell-buy;
           prophit.push_back(profit);

        }
        
    }
    sort(prophit.begin(),prophit.end());
    int m = prophit.size();
    
    return prophit[m-1];   

}

// Optimal answer

int maxiprophit(vector<int> &prices){
    int mini = prices[0];
    int maxprophit = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++)
    {
      int cost = prices[i] - mini;
      maxprophit = max(mini, prices[i]);

    }

    return maxprophit;
}

int main(){
    vector<int> nums = {2,4,1,3,5,4,2,4,7};
    int i = maxProfit(nums);
    cout<<i<<endl;
    
    
    return 0;
}