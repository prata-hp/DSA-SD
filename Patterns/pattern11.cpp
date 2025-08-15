#include <iostream>
using namespace std;

void pattern11(int n){

    cout<<"Enter n";
    cin>>n;
    
    for (int i=0; i<n; i++){
        //number
        for(int j =0; j< i+1; j++){
            cout<<j+1;
        }

        //space
        for(int j =n+2; j>0; j= 2){
            cout<<" ";
        }
        printf("\n");
    }
}