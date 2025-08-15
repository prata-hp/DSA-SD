// recursion = function calling itself until a specific condition[base condition] is met.
// Stack Overflow = too  many function calls.
// How to do recursion - 
// 1. set a base condition.
// 2. call the function itself;

// this is make the loop go on and on until the the base condition is reached 
#include <iostream>
using namespace std;



void Recursive_Function(int count){
    if (count == 4){
 return ;  // base condition
    }
    else {
        printf("%d",count);
        count++;
        return Recursive_Function(count); 
    }
}

int main(){
  int count = 0;

  Recursive_Function(count);

  return 0;

}