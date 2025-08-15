// recursion = function calling itself until a specific condition[base condition] is met.
// Stack Overflow = too  many function calls.

#include <iostream>
using namespace std;



void Recursive_Function(int count){
    if (count == 4){
 return ;
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

// Recursion tree= to represent recursion process and function calls.
