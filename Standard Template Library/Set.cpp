// A set is a map but for keys only it sorts the keys and does not allow duplicates
// erase empty arrays work as same as they do in a map.  {lower_bound(4) = should not be less than value(4) minimum 4 ya usse just bada ya 0} and upper_bound = greater than the key;

#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1 );
    s.insert(2 );
    s.insert(3 );
    s.emplace(4 );
    s.insert(5 );
    s.insert(6 );
    s.insert(7 );
    
    s.insert(1 );
    s.insert(2 );
    s.insert(3 );
    
    //lower_bound
    cout<< "lower bound "<< *(s.lower_bound(4) )<< endl; //4
    //upper bound
    cout << "upper bound "<< *(s.upper_bound(4)) <<endl; //5
    for(auto i : s){
        cout<< i <<" ";
    }

}


//further - Multi set  , unordered set
