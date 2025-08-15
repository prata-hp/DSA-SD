#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//most optimal solution -waah o[N]
void moveZeros(vector<int> &nums){
    int i = 0, n= nums.size();

    for (int j = 0; j < n; j++)
    {
       if(nums[j] != 0){
        swap(nums[j],nums[i]);
        i++;
       }
    }    
    return;
}

int main(){
    vector<int> vec = {0,1,2,4,4,6,7,8,9,6,0,0,8,8,8,66,7,8,8,5,5,8,0,0,0,0,3};
    moveZeros(vec);
    for (auto val : vec)
    {
       cout<<val<<" ";
    }
    return 0;  
}
