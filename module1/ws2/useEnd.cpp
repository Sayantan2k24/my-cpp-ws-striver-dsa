#include<bits/stdc++.h>
using namespace std;

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




// Same thing but using for loop
// Function to demonstrate using end() for reverse iteration
void useEndForLoop() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    for (vector<int>::iterator it = v.end() - 1; it >= v.begin();) {
        
        cout << *it  << " "; 
        it--;

    }
// it start pointing to the last addr and iterates till the index including the first index, but not beyond the first index
// so,loop itself is running 5 times so 5 elements will be there,
// but first it prints the element then it points to the previos mem addr

    cout << endl;
}




// what if I want to print 50 40 30 20

// Function to demonstrate using end() for reverse iteration
void useEndForLoop_50_20() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    for (vector<int>::iterator it = v.end() - 1; it > v.begin();) {
        
        cout << *it  << " "; 
        it--;

    }
    // loop is running 4 times as used, think of as index 4 to index 1 --> 4 times, not including index 0 -- v.begin()

    cout << endl;
}




// print 40 30 20 10

void useEndForLoop_40_10() {
    vector<int> v = {10, 20, 30, 40, 50};  // Declare a vector with some elements

    for (vector<int>::iterator it = v.end() - 1; it > v.begin();) { // loop runs 4 times
        it--;
        cout << *it  << " "; 
        

    }
// loop is running 4 times as used, as index 4 to index 1 --> 4 times, not including index 0 -- v.begin()

    cout << endl;
}




int main() {

    // useEnd();        // Demonstrate using end() for reverse iteration
    useEndForLoop();
    useEnd();
    useEndForLoop_50_20();
    useEndForLoop_40_10();


    return 0;
}


// Output

// 50 40 30 20 10 
// 50 40 30 20 10 
// 50 40 30 20 
// 40 30 20 10 