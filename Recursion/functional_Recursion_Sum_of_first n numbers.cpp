// Functional Recusrion = returns the value instead of printing it.
// mysoln.
#include <iostream>
using namespace std;

int sum =0;
int Sum_oF_N(int i, int n){
    if(i<=n){
        sum = sum + i;
        return Sum_oF_N(i+1,n);
    }
    else{
    return sum;
    }
};

int main(){
    int n=4, sum;
    sum = Sum_oF_N(1,n);
    // sum = Sum_oF_N(n);
    cout<<sum;
    return 0;
    
}

//
 /**
  
 int Sum_oF_N(int n){
 if(n==0) return 0;
 return n + Sum_oF_N(int n);
 }
  
  
  
  
  
  */
