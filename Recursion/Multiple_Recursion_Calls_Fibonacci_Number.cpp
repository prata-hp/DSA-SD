//  Multiple Recursion Calls = Ina function a function is called more than one times.
#include <iostream>
using namespace std;
// Textbook solution

long fib(int n){
    if(n==0) return 0;  
    else if (n==1) return 1;
    else return fib(n-1)+fib(n-2);
    
}

int main(){
    int n=9,i=0;
    //cin>>n;

    while (i<=n)
    {
        cout<<fib(i)<<"\t";
        i++;
    }
 return 0;

}


// My Solution



// int fib(int start,int second,int next,int n){
//     if(n==0){
//         return 0;
//     }   
//     cout<<start<<"\t";
//     next= second+start;
//     start= second;
//     second= next;
    
//     fib(start,second,next,n-1);
// }

// int main(){
//     int start=0,second=1;
// int next;
//     int n=9;
//     fib(0,1,next,n);
    
//     return 0;
    
// }