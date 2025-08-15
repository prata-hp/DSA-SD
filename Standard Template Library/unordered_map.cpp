// It stores the keys in a random order

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> age;

    // Insert elements
    age["Alice"] = 25; 
    age["hanumant"] = 20;          
    age.insert({"Bob", 30});     
    age.emplace("Charlie", 35);

    for(auto i : age){
        cout<<i.first<< " is "<<i.second<<endl; 
    }
   cout<<endl;

   return 0;
}

/*
The major difference between unordered map and a normal map is that the insert arrays and count of an unordered map are O and in worst case big O whereas in a normal map which is a self balancing tree they insert erase and count are of big O log N time complexity.



*/