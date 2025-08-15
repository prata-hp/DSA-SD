#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

int main(){
    //Sorting - this function sorts arrays into ascending order[default]
    //sort(arr, arr+n) - for ascending  || sort(arr, arr+n, greater<int>()) - for descending use greater functor
    //sort(v.begin(), v.end())


    // for array
    int arr[5] = {3,5,1,8,2};
    std::sort(arr, arr+5);  // 
    for(auto val : arr){
        std::cout<<val<<" ";
        
    }

    // vector
    std::vector<int> vec = {3,5,1,8,2};
    for(auto val : vec){
        std::cout<<val<<" ";
        }

    //vector of pair
     std::vector<int> vec2 = {{1,2},{2,3},{3,4},{4,5}};
    
    std::sort(vec2.begin(),vec2.end());
    for(auto val : vec2){
        std::cout<<val<<" ";
    }
    std::sort(vec.begin(), vec.end());
    return 0;

}