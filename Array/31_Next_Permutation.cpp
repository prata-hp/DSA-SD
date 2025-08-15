/*A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

"Lexicographically" refers to the way items are ordered in a way similar to alphabetical order, like in a dictionary. It's a way to compare and sort sequences of elements, whether they are letters, numbers, or other symbols. */

#include <iostream>
#include <vector>
using namespace std;

void nextPermutaion(vector<int> &nums){
   next_permutaion(nums.begin(), nums.end());
   return;
}

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    nextPermutaion(nums);     
    return 0;
}
