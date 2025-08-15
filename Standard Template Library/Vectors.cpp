/*Size of array is constant
Vector a dynamic array
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
 //to create 
 vector<int> vec; // size is zero
 //or 
 vector<int> vect = {1,2,5,8,9};
 //or if you wanna repeat a value over and over
 vector<int> vec2(3, 10); // 3 times 10
 //or You can copy another vectors value in another vector
 vector<int> vec3(vec2);

 
 // push back = insert in last

 vec.push_back(1);
 vec.push_back(2);
 vec.push_back(1);

 /* To add new elements in the vector the internal mechanisms first remove the earlier vector with the zero size and then create a size one vector to insert one then to insert two they remove the earlier vector with size 1 and then create a vector with size 2 we will copy the last value and insert the new data and so on */
 
 // emplace back = similiar to push_back but underworking is different (i.e see .capacity with and without emplace)
 vec.emplace_back(6);
 // pop_back = deletes the last element

 // To Access = .at or [];
  cout<<vec.at(2)<< endl;

 //     Front and back
 cout<<"Front "<< vec.front() <<endl;
 cout<<"Back "<< vec.back() <<endl;

 // size & capacity
    cout<< "SIZE AND CAPACITY"<<endl;
    cout<< vec.size()<<endl;
    cout<< vec.capacity()<<endl;

 //Printing Elements
 cout<< "elements" <<endl;
    for (int val : vec)
    {
        /* code */
        cout<<val<<" ";
        
    }
    cout<<endl;

 // ERASE AND INSERT = COSTLY
    //refer to vector.cpp for more

 // Iterators = It is a data type specifically for loop
    cout<< "vect"<<"\n";
    // Forward loop 
    vector<int>::iterator it;
    for(it = vect.begin(); it!=vec.end(); it++){
        cout<< *(it) <<endl;  // Derefrenced to get a value.
    }
    // r means reverse
    // Here we introduced a new iterator "it_two" but we did not Create it instead We used the "auto" keyword Which automatically decides its data type 
    // backward loop
    for (auto it_two = vect.rbegin(); it_two!=vec.rend() ; it_two++)
    {
        /* code */
    }
    



 

 
return 0;
}