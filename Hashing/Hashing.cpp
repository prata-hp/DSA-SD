#include <iostream>
#include <array>
using namespace std;
/*
example array = [1,2,1,3,2]
Some PreCalculation = counting the frequency of a particular number beforehand
Hashing = [0 2 2 2 1 0 0 0 0 0 0] 
     index[0 1 2 3 4 5 6 7 8 9 10]
 After Doing the above we won't have to iterate N number of times if we want to know the frequency of a particular element of an array.     

 segmentation fault = unable to allocate
FACTS
1. MAX ARRAY SIZE = 10pow6[inside main] near 10pow7[globally]
2. Bool Max Array Size= 10pow7[main]  10pow9[globally]
 */

// Input = size,array,no. of queries,lay down the numbers you wanna know frequencies of
int main(){
    cout<<"Enter size";
    int n;
    cin >> n;
    cout<<"Enter Array";
    int arr[5];
    for(int i = 0;i<n; i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i= 0; i<n; i++){
        hash[arr[i]] += 1;
    }
    cout<<"Enter number of queries";
    int q;
    cin>>q;

    while (q--)
    { cout<<"enter";
        int number;
        cin>> number;
        cout<< hash[number] << endl;
    }
    
 return 0;
}