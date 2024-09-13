#include<bits/stdc++.h>
using namespace std;

// Function to demonstrate printing specific elements using an iterator
void printSpecificElements() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements
    
    vector<int>::iterator it = v.begin(); // Points to the first element
    it++;  // Move iterator to the second element
    cout << *(it) << " ";  // Output the second element

    it = it + 2;  // Move iterator to the fourth element (index 3)
    cout << *(it) << " ";  // Output the fourth element

    cout << endl;

}

// Function to demonstrate printing the first and last elements
void printFirstAndLast() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    cout << v[0] << " " << v.at(0) << " ";  // Print the first element using two methods
    cout << v.back() << " ";  // Print the last element

    cout << endl;
}



// Function to demonstrate using end() for reverse iteration
void useEnd() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    vector<int>::iterator it = v.end() - 1;  // Points to the last element
    cout << *it << " ";  // Output the last element

    // Loop backwards using end()
    while (it != v.begin()) {
        it--;
        cout << *it << " ";  // Output elements in reverse order
    }

    cout << endl;
}


// Function to demonstrate using rbegin() for reverse iteration
void useRbegin() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
        cout << *(it) << " ";  // Output each element starting from the last
    }

    cout << endl;
}


// Function to demonstrate using rend() for reverse iteration
void useRend() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    vector<int>::reverse_iterator it = v.rend() - 1;  // Points to the first element
    cout << *it << " ";  // Output the first element (in reverse iteration sense)

    cout << endl;
}



// Function to demonstrate iterating through a vector using an explicit iterator
void iterateWithIterator() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";  // Output each element in the vector
    }

    cout << endl;
}

// Function to demonstrate iterating through a vector using 'auto'
void iterateWithAuto() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";  // Output each element in the vector
    }

    cout << endl;
}

int main() {
    // Call functions to demonstrate various vector manipulations
    printSpecificElements();  // Print specific elements
    printFirstAndLast();      // Print the first and last elements
    iterateWithIterator();    // Iterate using explicit iterator
    iterateWithAuto();        // Iterate using 'auto'

    // Additional functions to demonstrate end(), rbegin(), and rend()
    useEnd();        // Demonstrate using end() for reverse iteration
    useRbegin();     // Demonstrate using rbegin() for reverse iteration
    useRend();       // Demonstrate using rend() for reverse iteration


    return 0;
}


// Output

// 20 40 
// 10 10 50 
// 10 20 30 40 50 
// 10 20 30 40 50 
// 50 40 30 20 10 
// 50 40 30 20 10 
// 10 