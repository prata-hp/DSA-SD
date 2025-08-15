#include <bits/stdc++.h>
using namespace std;


 bool Reverse_String( string &word,int i,int n, string &og){
        
    if (i >= n/2)  
    { 
        if (og == word)
        {
            return true;
        }
        
       else return false;
    }
    swap(word[i],word[n-i]);

    Reverse_String( word,i+1,n, og);
}

int main(){
    string word = "boba";
    string og;
    og = word;
    bool check;
   
    
    check = Reverse_String(word,0,word.length()-1,og);
  
    if (check)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    
    
    return 0;
}