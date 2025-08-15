#include <iostream>
#include <map>
/*map{char, frequency}
in map
storing= 
         = O(logn) [all cases]
fetching=

*/
using namespace std;
int main(){
    int  n=5;
    //cin>>n;
    int arr[5];
    for(int i=0; i<n; i++){
        cin>>arr[i];     
    }
  map <int, int>mpp;
    //precomputing
    for (int i = 0; i <= n ; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<mpp[number];
    }
    
    
}