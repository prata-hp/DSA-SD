#include <iostream>
#include <vector>
using namespace std;

int number(std::vector<int> nums){
    int n = nums.size();
    int i=0,flag=0;

 for ( i = 0; i < n; i++)
 {  
 
    for (int j = 0; j < n; j++)
    {
        if (nums[i]==nums[j])
        {
            flag++;
            
        }
        
    }

    if (flag==1)
    {
       return i;
    }
    else
    {
      flag=0;
    }  
    
    

 }
    
    
}

int main(){
 vector<int> vec = {4,4,3,3,0,0,1,5,5};
 number(vec);
    
}