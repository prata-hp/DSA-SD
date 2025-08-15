#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isSortedAndRotated(std::vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }
    // If count is 0, array is sorted (not rotated)
    // If count is 1, array is sorted and rotated
    // Otherwise, not sorted and rotated
    return (count == 0 || count == 1);
}

int main(){
vector<int> vec;

    cout<<"Enter Size"<<endl;
    int n;
    bool j;
    cin>>n;
    cout<<"Enter Array"<<endl;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin>>input;
        vec.push_back(input);
    }

    j = isSortedAndRotated(vec);
    cout<<"Is sorted: "<<(j? "Sorted":"not Sorted");
 return 0;

}