#include<iostream>
#include <map>
#include<vector>
using namespace std;

//Optimal Solution - Moore's Voting Algorithm
//make take
int maajorityElement(vector<int> &nums){
    float n = nums.size();
    int element,count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            element=nums[i];
        }
        if(nums[i]==element){
            count++;
        }
        else{
            count--;
        }

    }
   
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == element)
        {
            count++;
        }
        
    }

    if (count > n/2)
    {
       return element;
    }


    return -1;
    
}
//my answer = O(N), Space= O(N)
int majorityElement(vector<int> &nums){
    float n= nums.size();
    map<int,int> hash;
    int i=0;
    for(int i=0; i<=n; i++){
        hash[nums[i]]++;
        if(hash[nums[i]] >= n/2)
        return nums[i];
    }
    
    return nums[i];
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    int i = maajorityElement(nums);
    cout<<i;
    return 0;
}