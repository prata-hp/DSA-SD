#include <iostream>
#include <vector>
using namespace std;

// mysoln - brute
int missingNumber(vector<int> &nums){
    int i,j,n=nums.size();
    for(i=0;i<=n;i++)
    {
        int flag=0;
        for (int j = 0; j < n-1; j++)
        {            
            if (nums[j]==i)
            {                
               flag=1;
               break; 
            }           
        }
                   
           if (flag==0)
           {
            return i;
           }
        
    }
}

// wannabe optimal solution - cuz stack overflow
int omissingNumber(vector<int> &nums){
    int i;
    float sum=0,sum1=0,n=nums.size();
    sum = (n/2)*(n+1);
    for (int i = 0; i < n; i++)
    {
        sum1 += nums[i];
    }
    
 return sum-sum1;

}




int main(){
vector<int> vec = {4,3,0,1,5};
int i = omissingNumber(vec);
cout<<i<<" "<<endl;

return 0;
}