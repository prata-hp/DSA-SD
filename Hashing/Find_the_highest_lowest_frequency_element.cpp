#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    //cout<<"Enter Size of array "<<endl;
    int n=5;
    //cin>>n;
    int arr[5];
    cout<<"Enter Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i<<". ";
        cin>>arr[i];
    }
    cout<<endl;
    map<int, int> mpp;
    //precomputation

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (mpp[j]>mpp[j+1])
            {
                swap(mpp[j],mpp[j+1]);
            }
            
        }
        
    }
    map<int,int>::iterator it;
    
    cout<<it.second;
        
    
    
    //cout<<mpp[n-1].first();
    
    return 0;
    
}