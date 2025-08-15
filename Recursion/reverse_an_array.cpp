/*
#include <iostream>
using namespace std;

// To return an array use pointer 

int i=0;
int* Reverse_Array(int n,int arr[], int rarr[]){
    if(n<0){
      return rarr;        
    }
    rarr[i]=arr[n-1];
    i++;
    Reverse_Array(n-1,arr,rarr);
    
}

int main (){
    int* ptr;
    int rarr[4];
    int arr[4]= {1,2,3,4};
    int n= 4;
   ptr = Reverse_Array(n,arr,rarr);

    for (int i = 0; i <= n-1; i++)
    {
        cout<<ptr[i]<<"\t";
    }
    
    
}


*/
#include <bits/stdc++.h>
using namespace std;

//int i = 0;

void Reverse_Array(int i,int n, int arr[]){
 
 if(i>=n/2){
   return ;
  }
 swap(arr[i],arr[n-i-1]);
 //i++;

 Reverse_Array(i+1,n, arr);
}

int main (){
    int* ptr;
    int rarr[4];
    int arr[4]= {1,2,3,4};
    int n= 4;
 
    Reverse_Array(0,n,arr);

    for (int i = 0; i <= n-1; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    
}