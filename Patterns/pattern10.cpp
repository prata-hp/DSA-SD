#include <iostream>
using namespace std;

void pattern10 (int n){
    int start = 1;
    for (int i=0; i<n; i++){
        if(i % 2*n == 0){
            start = 1;
        }

        for(int j =0; j<=i; j++){
            
                printf("%d", start);
                start = 1-start;
            
            
        }
        printf("\n");
    }
} 

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        pattern10(n);
    }

}