/*

A 
B B
C C C
D D D D
E E E E E
F F F F F F

*/

// N = 6



// Solution 1

// i = 0 based index
// j = 0  based index

#include <iostream>
using namespace std;

void pattern16Sol1(int n) {



    char letter = 'A';
    
    for (int i = 0; i < n; i++) {


        // Initialize the letter for the current row based on the row index
        // 'A' + i gives 'A' for i = 0, 'B' for i = 1, and so on

        // char letter = 'A'+i;

        // But `i` must be initialized with 0 for the expression to be 'A' + i .

        // We could directly initialize for the first time here 
        // rather than doing +1 at the end of each row every time

        for (int j = 0; j <= i; j++) {
            cout << letter << " "; // same char is to be printed i+1 times in that row.
        }

        cout << endl;  // Move to the next line after printing all letters in the current row
        
        // Move to the next letter in the alphabet for the next row
        letter = letter + 1;
    }
}

int main() {
    int N;
    cin >> N;  
    pattern16Sol1(N);  
    return 0;
}
