#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n=5,i=0,arr[5] ,temp;
    while(i<n){
        std::cin>>arr[i];
        i++;
    }
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {            
            largest = arr[i];
        }
        
    }
  cout<<largest;    
}
