/*
A
A B
A B C 
A B C D
A B C D E

// N = 5 

*/


#include <iostream>
using namespace std;

void pattern14(int n) {
    
    for (int i = 0; i < n; i++) {

        // Initialize the letter to 'A' at the start of each row
        char letter = 'A';
        
        
        for (int j = 0; j <= i; j++) {
            cout << letter << " ";  // Print the current letter
            letter = letter + 1;     // Move to the next letter in the alphabet
        }
        
        cout << endl;  // Move to the next line after printing each row
    }
}

int main() {
    int N;
    cin >> N;          
    pattern14(N);      
    return 0;
}



