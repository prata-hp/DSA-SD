// Deque = Double Ended Queue.
// It is implemented by dynamic arrays hence the random access is made possible which was not possible in linked list.
// Functions like push back and push front and place back and employees front pop back and pop front size erase clear begin and are begin R and insert front back are possible.
#include <iostream>
#include <list>
#include <deque>

int main(){
   std :: deque<int> d = {1,2,3,4,5};
   for(int val : d){
       std:: cout<<val<<std::endl;
   }
}