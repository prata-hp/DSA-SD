#include <iostream>
using namespace std;

//int sum=0;
void Sum_of_Numbers(int i,int sum){            
if(i<1){ 
    cout<<sum; 
    return;
}
Sum_of_Numbers(i-1,sum+i);
}

int main(){
    int n=4;
    Sum_of_Numbers(n,0);
    return 0;
}

