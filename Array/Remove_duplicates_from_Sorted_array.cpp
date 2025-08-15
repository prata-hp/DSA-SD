#include <iostream>
#include <vector>
using namespace std;

//two pointer approach(O(n)) - arr[j] are you same as arr[i] then swap the next element with arr[j] and increment i
//this will ensure that all duplicates are removed and the array is sorted in place
int removeDupes(vector<int> arr){
    int i=0,j,n =arr.size();
    for (int j = 0; j < n ; j++)
    {
        if (arr[i] != arr[j])
        {
           swap(arr[i+1],arr[j]);
           i++; 
        }
               
    }

   return i+1; // return the new size of the array after removing duplicates
}

int main(){
 vector<int> vec={1,1,2,3,3,4,5,5,6};
 removeDupes(vec);
 return 0;
}
// my sol


// int main(){
//     vector<int> vec={1,2,4,7,7,5};
//     vector<int> a;
//     int n= vec.size();
//     //cout<<"Enter Size"<<endl;
//     // int n;
//     // cin>>n;  
//     // cout<<"Enter Array"<<endl;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     int input;
//     //     cin>>input;
//     //     vec.push_back(input);
//     // }
    
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (vec[j]>vec[j+1])
//             {
//                 swap(vec[j],vec[j+1]);
//             }
            
//         }
        
//     }
//      for (int i = 0; i < n-1; i++)
//      {
//         if (vec.at(i) == vec.at(i+1))
//         {
//             a.push_back(i);
//         }
        
//      }

//      for (int i = 0; i < a.size(); i++)
//      {
        
//      vec.erase(vec.begin()+a[i]);
//      }
     
    

//     cout<<"array "<<endl;
//     for (int i = 0; i < n-a.size(); i++)
//     {
//         cout<<vec[i]<<" ";
//     }
    

//     return 0;
    
// }