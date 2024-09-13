#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    // Declare an empty vector of integers
    vector<int> v;
    v.push_back(1);  // Adds 1 to the end of the vector
    v.emplace_back(2); // More efficient than push_back for direct insertion

    // Declare a vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1,2});  // Adds a pair {1,2} using push_back
    vec.emplace_back(1,2); // More efficient, no need for {} when using emplace_back

    // Create a vector with 5 elements, all initialized to 100
    vector<int> vec2(5,100); // {100, 100, 100, 100, 100}

    // Create a vector with 5 default-initialized elements (could be zero or garbage value)
    vector<int> v3(5); // Typically initializes to {0, 0, 0, 0, 0} for int type

    // Create a vector of 5 elements initialized to 20
    vector<int> v4(5,20); // {20, 20, 20, 20, 20}

    // Create a new vector by copying another vector
    vector<int> v5(v4); // v5 is now a copy of v4, so it will be {20, 20, 20, 20, 20}




}

int main(){
    explainVector();
}


// Quick Tips:
// push_back vs emplace_back: emplace_back is generally more efficient for inserting complex objects as it constructs them in place.
// Vector initialization: vector<int> vec(n, x) initializes a vector with n elements, each having the value x.
// Copy constructor: vector<int> v2(v1) creates a new vector v2 as an exact copy of v1.






