#include <iostream>
using namespace std;


void print(int n){

    if(n>0){ cout<<n;
    n--;
    return print(n);}
}

int main(){
    int n=4;
    //cin>>n;
    print(n);

    return 0;

}
