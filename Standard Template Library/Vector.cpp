/**
 * This program demonstrates the usage of various member functions of the 
 * std::vector container in C++. Each function is explained below:
 *
 * 1. push_back(): Adds an element to the end of the vector.
 * 2. pop_back(): Removes the last element from the vector.
 * 3. size(): Returns the number of elements in the vector.
 * 4. capacity(): Returns the current capacity of the vector.
 * 5. resize(): Resizes the vector to the specified size, optionally filling new elements with a value.
 * 6. empty(): Checks if the vector is empty.  0 or 1
 * 7. at(): Accesses the element at the specified index with bounds checking.
 * 8. front(): Returns a reference to the first element in the vector.
 * 9. back(): Returns a reference to the last element in the vector.
 * 10. clear(): Removes all elements from the vector.
 * 11. insert(): Inserts elements at the specified position in the vector. costly     
 * 12. erase(): Removes elements from the specified position in the vector. ERASE and clear do not change capacity they change size . costly
 * 13. swap(): Exchanges the contents of two vectors.
 * 14. assign(): Assigns new contents to the vector, replacing its current contents.
 * 15. emplace_back(): Constructs and adds an element to the end of the vector.
 * 16. shrink_to_fit(): Reduces the capacity of the vector to fit its size.
 * 17. reserve(): Requests that the vector capacity be at least enough to hold a specified number of elements.
 * 18. data(): Returns a pointer to the underlying array serving as the vector's storage.
 * 19. emplace(): Constructs and inserts an element at the specified position in the vector.
 *
 * The program demonstrates each of these functions with examples and outputs the results.
 * For more{iterators} refer to vectors.cpp
 */
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    // 1. push_back()
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    //vec.push_back(40);
    std::cout << "After push_back: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 2. pop_back()
    vec.pop_back();
    std::cout << "After pop_back: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 3. size()
    std::cout << "Size: " << vec.size() << "\n";

    // 4. capacity()
    std::cout << "Capacity: " << vec.capacity() << "\n";

    // 5. resize()
    vec.resize(5, 100);
    std::cout << "After resize: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 6. empty()
    std::cout << "Is empty: " << (vec.empty() ? "Yes" : "No") << "\n";

    // 7. at()
    std::cout << "Element at index 1: " << vec.at(1) << "\n";

    // 8. front()
    std::cout << "Front element: " << vec.front() << "\n";

    // 9. back()
    std::cout << "Back element: " << vec.back() << "\n";

    // 10. clear()
    vec.clear();
    std::cout << "After clear, size: " << vec.size() << "\n";

    // 11. insert()
    vec.insert(vec.begin(), 50);
    vec.insert(vec.begin() + 1, 60);  // (positon, value)
    std::cout << "After insert: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 12. erase()
    // Erase is a costly function
    // vec.erase(start,end)   
    vec.erase(vec.begin());
    //vec.erase(vec.begin()+1); // Using this we now move from index zero to index 1
    std::cout << "After erase: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 13. swap()
    std::vector<int> vec2 = {1, 2, 3};
    vec.swap(vec2);
    std::cout << "After swap, vec: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 14. assign()
    vec.assign(3, 42);
    std::cout << "After assign: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 15. emplace_back()
    vec.emplace_back(99);
    std::cout << "After emplace_back: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    // 16. shrink_to_fit()
    vec.shrink_to_fit();
    std::cout << "After shrink_to_fit, capacity: " << vec.capacity() << "\n";

    // 17. reserve()
    vec.reserve(10);
    std::cout << "After reserve, capacity: " << vec.capacity() << "\n";

    // 18. data()
    int* dataPtr = vec.data();
    std::cout << "Data pointer points to: " << *dataPtr << "\n";

    // 19. emplace()
    vec.emplace(vec.begin() + 1, 88);
    std::cout << "After emplace: ";
    for (int val : vec) std::cout << val << " ";
    std::cout << "\n";

    return 0;
}
