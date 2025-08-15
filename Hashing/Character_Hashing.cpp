#include<iostream>
#include<string.h>
using namespace std;


int main(){
  string s;
  cout<<"Enter string";
  cin>>s;
  int hash[256]={0};
  for (int  i = 0; i < s.size(); i++)
  {
    hash[s[i]]++;
  }

   cout<<"Enter number of queries";
    int q;
    cin>>q;

    while (q--)
    { cout<<"enter";
        char number;
        cin>> number;
        cout<< hash[number] << endl;
    }
    
 return 0;
  
}