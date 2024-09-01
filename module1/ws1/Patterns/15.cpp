/*

A B C D E F
A B C D E 
A B C D
A B C
A B
A

*/

// N = 6


// Solution 1

// i = 0 based index
// j = 0 based index

#include <iostream>
using namespace std;

void pattern15Sol1(int n) {
    for (int i = 0; i < n; i++) {
        
        
        char letter = 'A';

        for (int j=0; j<n-i; j++) {
            cout << letter;
            letter  = letter + 1;
        }
        cout << endl;
    }
}


// Solution 2

// i = 1 based index
// j = 0 based index

void pattern15Sol2(int n) {

    for (int i = 1; i <= n; i++) {
        
        
        char letter = 'A';

        for (int j=0; j<=n-i; j++) {
            cout << letter;
            letter  = letter + 1;
        }
        cout << endl;
    }
    
}


// Solution 3
// i = 1 based index
// j = 1 based index

void pattern15Sol3(int n) {

    for (int i = 1; i <= n; i++) {
        
        
        char letter = 'A';

        for (int j=1; j<=n-i+1; j++) {
            cout << letter;
            letter  = letter + 1;
        }
        cout << endl;
    }
    
}

int main() {
    int N;
    cin >> N;          
    pattern15Sol1(N); 
    pattern15Sol2(N);   
    pattern15Sol3(N);  
    return 0;
}


