//
//## **STL List in C++ - Notes & Examples**  
//
//# **Introduction to `std::list`**  
//`std::list` is a part of the Standard Template Library (STL) in C++ and implements a **doubly linked list**. It allows **fast insertion and deletion** at both ends and anywhere in the list but provides **slow random access** compared to `std::vector`.
//
//### **Header File:**  
//```cpp
//#include <list>
//```
//
//### **Syntax:**  
//```cpp
//std::list<T> list_name;
//```
//Here, `T` is the data type of the elements.
//
//---
//
//## **Functions in `std::list` with Examples**
//### **1. Initialization and Basic Operations**  
//
//#### **Constructor & Initialization**  
//```cpp
#include <iostream>
#include <list>

int main() {
    std::list<int> l1;                      // Empty list
    std::list<int> l2 = {10, 20, 30, 40};   // List with values
    std::list<int> l3(5, 100);              // List with 5 elements, each initialized to 100

    for (int x : l3)
        std::cout << x << " ";  // Output: 100 100 100 100 100
//}
//2. `push_back()` and `push_front()` - Insert Elements**  
// `push_back(value)`: Adds an element to the **end**.
// `push_front(value)`: Adds an element to the **front**.
//  

std::list<int> l;
l.push_back(10);
l.push_back(20);
l.push_front(5);  // List: 5, 10, 20

//3. `pop_back()` and `pop_front()` - Remove Elements**  
//- `pop_back()`: Removes the **last** element.
//- `pop_front()`: Removes the **first** element.


std::list<int> l = {5, 10, 20};
l.pop_back();   // List: 5, 10
l.pop_front();  // List: 10

### **4. `insert()` - Insert at a Specific Position**  
//insert(iterator, value)`: Inserts an element at a specific position.


std::list<int> l = {10, 20, 30};
auto it = l.begin();
++it;  // Move iterator to 2nd element
l.insert(it, 15);  // List: 10, 15, 20, 30




//### **5. `erase()` - Remove an Element at a Specific Position**  
//- `erase(iterator)`: Removes an element at a given position.

std::list<int> l = {10, 15, 20, 30};
auto it = l.begin();
++it;  // Points to 15
l.erase(it);  // Removes 15, List: 10, 20, 30




//### **6. `remove()` - Remove Elements by Value**  
//remove(value)`: Removes **all occurrences** of the value.
//
//```cpp
std::list<int> l = {10, 20, 30, 20, 40};
l.remove(20);  // List: 10, 30, 40


### **7. `size()` - Get the Size of the List**  
size()`: Returns the number of elements.

```cpp
std::list<int> l = {10, 20, 30};
std::cout << l.size();  // Output: 3
```

---

### **8. `front()` and `back()` - Access First and Last Elements**  
- `front()`: Returns the first element.
- `back()`: Returns the last element.

```cpp
std::list<int> l = {10, 20, 30};
std::cout << l.front();  // Output: 10
std::cout << l.back();   // Output: 30
```

---

### **9. `clear()` - Remove All Elements**  
- `clear()`: Erases all elements but keeps the list structure.

```cpp
std::list<int> l = {10, 20, 30};
l.clear();  // List becomes empty
std::cout << l.size();  // Output: 0
```

---

### **10. `empty()` - Check If the List is Empty**  
- `empty()`: Returns `true` if the list is empty.

```cpp
std::list<int> l;
std::cout << l.empty();  // Output: 1 (true)
```

---

### **11. `sort()` - Sort the List**  
- `sort()`: Sorts the list in ascending order.

```cpp
std::list<int> l = {30, 10, 20, 40};
l.sort();  // List: 10, 20, 30, 40
```

---

### **12. `reverse()` - Reverse the List**  
- `reverse()`: Reverses the order of elements.

```cpp
std::list<int> l = {10, 20, 30};
l.reverse();  // List: 30, 20, 10
```

---

### **13. `merge()` - Merge Two Sorted Lists**  
- `merge()`: Merges two sorted lists into one sorted list.

```cpp
std::list<int> l1 = {10, 20, 30};
std::list<int> l2 = {15, 25, 35};
l1.merge(l2);  // List: 10, 15, 20, 25, 30, 35
```

---

### **14. `unique()` - Remove Consecutive Duplicates**  
- `unique()`: Removes **only consecutive** duplicate values.

```cpp
std::list<int> l = {10, 10, 20, 20, 30, 40, 40};
l.unique();  // List: 10, 20, 30, 40
```

---

### **15. `splice()` - Transfer Elements from Another List**  
- `splice(position, another_list)`: Transfers all elements of another list at the given position.

```cpp
std::list<int> l1 = {10, 20, 30};
std::list<int> l2 = {40, 50, 60};
l1.splice(l1.end(), l2);  // List1: 10, 20, 30, 40, 50, 60
```

---

## **Comparison with `vector`**  
| Feature  | `std::list` | `std::vector` |
|----------|------------|--------------|
| Random Access | ❌ (No direct access) | ✅ (Fast access with `[]`) |
| Insertion/Deletion (Middle) | ✅ (Fast) | ❌ (Slow) |
| Insertion/Deletion (End) | ✅ (Fast) | ✅ (Fast) |
| Memory Usage | ❌ (More overhead) | ✅ (Less overhead) |

---

## **Conclusion**  
- `std::list` is ideal for frequent insertions and deletions.
- Use `std::vector` if random access is needed.
- `std::list` consumes more memory due to extra pointers.

Would you like a comparison with `std::deque` as well? 🚀
