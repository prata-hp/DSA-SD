//Queue is a first in , first out data structure
//piche(back) se in, aage(front) se out just like a real life queue
//front, back
// swap();
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q; // Create a queue of integers

    // Enqueue elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // Access the front element
    cout << "Rear element: " << q.back() << endl;  // Access the rear element
    
    cout << "All elements: " << endl;
    while(!q.empty()){
    	cout << q.front() << " ";
    	q.pop();
	}
	cout << endl;
	
    q.push(10);
    q.push(20);
    q.push(30);

    // Dequeue elements
    q.pop();
    cout << "After dequeue, front element: " << q.front() << endl;

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue size: " << q.size() << endl;
    }

    return 0;
}
