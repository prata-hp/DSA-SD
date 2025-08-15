// The element which is largest in value has the top priority that is it will remain on top if you will push a value and if it larger than everybody then it will be on top it is as similar as Stack but it runs on trees;
// push,emplace–O(logn)  top-O(I)   pop(LOG N)   size   empty

#include <iostream>
#include <queue> // for priority_queue
using namespace std;

int main(){
    priority_queue<int> q;

    q.push(5);
    q.push(10);
    q.push(1);
    q.push(12);
    q.push(3);
    q.push(4);
    q.push(6);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

 // If you want your smallest element to be on top then you need to create a reverse priority queue.
 // Use the below syntax to do so which includes a functor named greater.
 priority_queue<int, vector<int>, greater<int>> rq;

    rq.push(5);
    rq.push(10); 
    rq.push(1);
    rq.push(12);
    rq.push(3);
    rq.push(4);
    rq.push(6);

    while (!rq.empty())
    {
        cout << rq.top() << " ";
        rq.pop();
    }
    cout << endl;

}
    




