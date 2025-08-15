#include <iostream>
#include <vector>
using namespace std;

// My Solution- works brute
void rotate(vector<int> &nums, int d){
    int n = nums.size();
    d = d % n; //mahatvpoorna
    for (int i = 0; i < d; i++)
    {
        int input = nums[i];
        nums.push_back(input);
    }

    nums.erase(nums.begin(),nums.begin()+d);

    for (auto val : nums)
    {
       cout<<val<<" ";
    }

        
}
// We're using time complexity being O and space also big O of N with an extra space of big O of 1.
void rotate(vector<int> &nums){
    int n = nums.size();
    int temp = nums[0], i;
    for ( i = 0; i <= n-2; i++)
    {
        nums[i] = nums[i+1]; // 
    }
    cout<<n<<endl;

    nums[i] = temp;

    for (auto val : nums)
    {
       cout<<val<<" ";
    }

}

int main(){
    int d= 652;
    vector<int> vec ={1,2,3,4,5};
    rotate(vec,d);


    return 0;
}