#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//optimal sol -similiar to mine
int ones(vector<int> &nums){
    int n=nums.size(), maxi=0,count=0;
     for (int j = 0; j < n; j++)
        {
            if (nums[j]==1)
            {
                count++;
                maxi=max(count,maxi);
            }
            else{
                count=0;
            }            
        }

        return maxi;
}

// my solution - space inefficient
int bones(std::vector<int> &nums){
    std::vector<int> vec = {0};
    int n = nums.size();

    int i=0;
    
        for (int j = 0; j < n; j++)
        {
            if (nums[j]==1)
            {
                vec[i]++;

            }
            else{
                i++;
                vec.push_back(0);
            }
            
        }
        
        
    sort(vec.begin(),vec.end());
    
    
  return vec[i];

}

int main(){
    std::vector<int> vec={1,1,2,3,4,1,1,1,5,6,7,9};

    int i=ones(vec);
    cout<<i;
  return 0;
    
}