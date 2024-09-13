#include<bits/stdc++.h>
using namespace std;

// Pairs

void explainPair() {
    // First pair
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    // Nested pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second;
}

int main() {
    explainPair();
}

//Output
// 1 3
// 1 3 4
// 4