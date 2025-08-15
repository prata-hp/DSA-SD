#include <iostream>
using namespace std;

void print (int i, int n){
    
    if(i > 4){
      return;
    }
   print(i+1,n);
    cout<<i<<" ";
}

int main(){
    int i =1;
    int n=40;
    print(i,n);
 return 0;
}
/*

4,4



























































*/




