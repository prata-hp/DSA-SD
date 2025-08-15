#include <iostream>
using namespace std;

void print(int i, int n){
    if(i>n){
        return;
    }
    cout<<"lamao ";
    return print(i+1,n);
}

int main(){
    int main;
    main=4;
    int i=1;
    print(i,main);
    return 0;
} 