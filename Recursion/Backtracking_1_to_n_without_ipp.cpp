#include <iostream>
using namespace std;
// Backtracking = instances of this can be seen if print line is written after the return line

void print (int i,int n){
    if(i<1){
    return;
    }
    print(i-1,n);   // function line
    cout<<i<<" ";  // print line
}

int main(){
    int n=4;
    // printf("Enter n");
    // cin>>n;
    print(n,n);
    return 0;
}