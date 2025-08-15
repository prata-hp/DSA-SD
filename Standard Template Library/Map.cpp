// Map.cpp - map is a combination of a key and a value the key is unique.
// It uses multiple functions like insert,emplace  count  erase  find  size, empty, erase
// Map is implemented as a balanced binary search tree.
// It is implemented as a red black tree.
// Map automatically sorts the keys in ascending order.
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> age;

    // Insert elements
    age["Alice"] = 25; 
    age["hanumant"] = 20;          // operator[]
    age.insert({"Bob", 30});     // insert
    age.emplace("Charlie", 35); // emplace

    // Access elements
    cout << "Alice: " << age["Alice"] << endl; // 25

    // Find element
    if (age.find("Bob") != age.end()) {
        cout << "Bob found!" << endl;
    }
    else{
        cout<< "Bob not found "<< endl;
    }

    // Iterate over map
    for (const auto& pair : age) {
        cout << pair.first << " is " << pair.second << " years old." << endl;
    }
    //or
    
    for(auto p: age){
        cout << p.first << " is " << p.second << " years old." << endl;
    }

    // Erase element
    age.erase("Alice");

    // Size of map
    cout << "Size: " << age.size() << endl;

    return 0;
}