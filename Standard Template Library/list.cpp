// We can push the lists from back and front and pop it from back and front and in place it from back and front . 
// Vector is implemented as a dynamic array whereas a list is implemented as a doubly linked listu
// l[2]; is not valid value -> Random access not possible
#include <iostream>
#include <list>

// size, erase, clear, begin, end, rbegin, rend, insert, front, back;
int main(){
    std::list<int> l;

    l.emplace_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_back(5);
    l.push_back(7);
    l.push_front(2);
    l.push_back(4);

    l.push_front(5);
    l.push_front(4);

    l.pop_back();
    l.pop_front();

    for(int val: l){
        std::cout<< val << " ";
    }
    std::cout << std::endl;

    return 0;
}