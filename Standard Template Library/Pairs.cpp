#include <iostream>
#include <vector>
#include <utility> // For std::pair
using namespace std;

 void explainPair() {
	// Declare a pair of integers
    // pairs only store two values of the same type or different types
    // The first value is the first element of the pair and the second value is the second element of the pair
	pair<int, int> p = {1, 2};
	cout << p.first << " " << p.second << endl; // Access first and second elements of the pair

	// Declare a nested pair
	pair<int, pair<int, int>> p2 = {1, {3, 4}};
	cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

	// Declare an array of pairs
	pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1} };
	cout << arr[1].second << endl; // Access the second element of the second pair in the array
	
	// Declare a vector of pairs
	vector<pair<int,int>> vec = { {1,2},{2,3},{3,4} };
	
	vec.push_back({4,5});  //push_back inserts pre made pair
	vec.emplace_back(4,5); //in-place objects create - creates a pair 
	for(auto p : vec){
		cout<< p.first <<" "<<p.second << endl;
	}
}


 int main(){
	explainPair();
	return 0;
 }