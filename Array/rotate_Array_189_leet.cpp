#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// Extra space O[1]

//TO right - brute method [big o N]
 void rotate(vector<int>& nums, int d) {
    vector<int> vec;
    int n = nums.size();
    d = d % n;
    for (int i = d; i > 0; i--)
    {
        int input = nums[n-i];
        vec.push_back(input);
    }

    for (int i = 0; i < n-d; i++)
    {
        int input = nums[i];
        vec.push_back(input);
    }
    for(int i=0; i < n; i++){
        nums[i] = vec[i];
    } 
    return;
    }
  
 //Optimal solution - O[1] space,0[2n] time complexity
 // First reverse the 
void orotate(vector<int>& nums, int d) {
  int n = nums.size();
   d =  d % n;
   reverse(nums.end()-d, nums.end());
   reverse(nums.begin(),nums.begin()+n-d);
   reverse(nums.begin(),nums.end());
}   


int main(){
    int d= 3;
    vector<int> vec ={1,2,3,4,5,6,7};
    orotate(vec,d);

    for (auto val : vec)
    {
       cout<<val<<" ";
    }


    return 0;
}