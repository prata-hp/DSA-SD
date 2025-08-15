#include <iostream>
using namespace std;
/*
*
**
***
****
*****
*****
****
***
**
*
*/

void pattern9(int n)
{
    for (int i=0; i<n; i++){
        for(int j =0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("*");
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
        
        pattern9(n);
    }

}    