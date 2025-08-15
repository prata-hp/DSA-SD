#include <iostream>
using namespace std;

    int i =1;

void print(int n){
    if(i<=n){
        cout<<i;
        i++;
     return print(n);
     }
    

}

int main(){
    int n=4;
    //cin>>n;
    print(n);

    return 0;

}