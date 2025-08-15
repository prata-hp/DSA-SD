/*
12345
2345
345
45
5
*/
#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=5; i++){
        int m = i;
        for(int j =6; j>i; j--){
            cout<<m;
            m++;
        }
        printf("\n");
    }
}