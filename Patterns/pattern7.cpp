#include <iostream>
using namespace std;

void pattern7(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            printf("*");
        }

        for (int j = 0; j < i; j++)
        {
            printf(" ");
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
        pattern7(n);
        pattern8(n);
    }
    // cin>> t;
}