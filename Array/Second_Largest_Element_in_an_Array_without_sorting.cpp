#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    #define INT_MIN -10000000;
    cout<<"Enter Size"<<endl;
    int n, largest;
    cin>>n;
    cout<<"Enter Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin>>input;
        vec.push_back(input);
    }
    largest = vec.at(0);
    int slargest = INT_MIN;

    for (int i = 1; i < n; i++)
    {  
    
        if (vec[i]>largest)
        {
            slargest = largest;
            largest = vec[i];
        }
        else if (vec[i]<largest && vec[i]>slargest){
         slargest = vec[i];
        }        
    }

    cout<<"The Second Largest is : "<<slargest<<endl;

}

// My First Solution

// int main (){
//     vector<int> vec;

//     cout<<"Enter Size"<<endl;
//     int n, largest,j;
//     cin>>n;
//     cout<<"Enter Array"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         int input;
//         cin>>input;
//         vec.push_back(input);
//     }
//     largest = vec.at(0);
//     for (int i = 0; i < n; i++)
//     {
//         if (vec[i]>largest)
//         {
//             largest = vec[i];
//             j=i;
//         }        
//     }
//     vec.erase(vec.begin()+j);
    
    
//     int slargest = vec.at(0);
//     for (int i = 0; i < n-1; i++)
//     {
//         if (vec[i]>slargest)
//         {
//             slargest = vec[i];
            
//         }
//     }

//     cout<<"The Second Largest is "<<slargest;

//     return 0;
    
// }