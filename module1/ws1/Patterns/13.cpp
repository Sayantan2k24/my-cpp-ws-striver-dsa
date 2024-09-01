/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


// N = 5
*/




#include <iostream>
using namespace std;

void pattern13(int n) {

    int start = 1; // As in the 1st row it starts with 1
    
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << start << " ";  // Print the current value of start
            start = start + 1;  // Increment start for the next number
        }
        
        cout << endl;  // Move to the next line after printing each row
    }
}

int main() {
    int N;
    cin >> N;
    pattern13(N);
    return 0;
}
