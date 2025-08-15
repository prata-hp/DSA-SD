#include <iostream>
#include <vector>

//optimal solution

bool sum(std::vector<int> &nums,int trgt){
   int n = nums.size();
  
}

//  brute method
bool sum(std::vector<int> nums, int trgt){
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; i < n; j++)
        {
            if (nums[i]+nums[j]==trgt)
            {
                return true;
            }
        }
        
    }
 
    return false;
}

std::vector<int> suim(std::vector<int> nums, int target){
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            if (i == j) continue;
            else if (nums[i]+nums[j]==target)
                {
                    
                    return {i,j};
                }
        
             
        }
        
    }

    return{};
}

int main (){
 std::vector<int> vec = {4,3,3,0,10,3,5,0};
 bool mule;
 int mint = 14;
 //mule = sum(vec,mint);
 std:: vector <int> n = suim(vec,mint);
 std::cout<<n[0];
 std::cout<<n[1];
 
}