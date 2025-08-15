#include<iostream>
#include <vector>
using namespace std;

// Kadane's Algoritm
// 1.We will run a loop(say i) to iterate the given array.
// 2.Now, while iterating we will add the elements to the sum variable and consider the maximum one.
// 3.If at any point the sum becomes negative we will set the sum to 0 as we are not going to consider it as a part of our answer.
#define INT_MIN -9999999;


//my take

int maxSubArray(vector<int>&nums){
    int n = nums.size();
    int sum=0,max = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        //add
        sum = nums[i]+sum;
        // max on top
     if(max<sum){
        max=sum;
       }
       // never add non negative sums
       if (sum<0)
       { 
        sum = 0;
       }     
       
    }
}

void maxSubArrayRange(vector<int>&nums){
    int n = nums.size();
    int sum=0,max = INT_MIN;
    int start=-1, end=-1;
    for (int i = 0; i < n; i++)
    {
        //add
        sum = nums[i]+sum;
        // max on top
     if(max<sum){
        int end = i;
        max=sum;
       }
       // never add non negative sums
       if (sum<0)
       { 
        int start = i;
        sum = 0;
       }     
       
    }
    

    for(int j = start; j <= end; j++){
        cout<<nums[j]<<" ";  
    }
}


int main(){
    vector<int> nums = {-2,-3,4,-1,-2,1,5,-3};
    int i = maxSubArray(nums);
    cout<<i<<endl;
    
    maxSubArrayRange(nums);


    return 0;
}