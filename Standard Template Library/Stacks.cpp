// Stack:- last in first out
// top se add , top se remove
// non sequential data structures from now
#include <iostream>
using namespace std;
#include <stack>

// Function to explain stack operations
void explainStack(){
    stack<int> st; // Declare the stack
    st.push(1);    // Push elements onto the stack
    st.push(2);
    st.push(3);
    cout << st.top() << endl; // Prints 3 (top element of the stack)
    st.pop();                 // Removes the top element (3)
    cout << st.top() << endl; // Prints 2 (new top element)
    cout << st.size() << endl; // Prints the size of the stack (2)
    cout << st.empty() << endl; // Prints 0 (false, stack is not empty)

    stack<int> st2; // Declare another stack
    st.swap(st2);   // Swap contents of st and st2
    stack<int> st3; // Declare a new stack
    st3.push(1);
    st3.push(2);
    st3.push(3);
    cout << "Stack elements: ";
    // pop and print until stnis not empty
    while (!st3.empty()) {
        cout << st3.top() << " "; // Print top element
        st3.pop();                // Removes top element
    }
    cout << endl; // Print a newline after displaying stack elements
    // Print a newline after displaying stack elements
    cout << endl;
	}
	// we pushed 1,2,3 ; we got 3,2,1
	int main(){
		explainStack();
		return 0;
	}
