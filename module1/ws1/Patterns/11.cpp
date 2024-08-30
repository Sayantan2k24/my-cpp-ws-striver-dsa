// for N = 5

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/



#include <iostream>
using namespace std;


void pattern11(int n) {
    int start = 1;

    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {
            start = 1; // Starting with 1 for even-indexed rows (i=0,2,4,...)
        } else {
            start = 0; // Starting with 0 for odd-indexed rows (i=1,3,...)
        }

        for (int j = 0; j <=i; j++) {
            cout << start << " ";  // Print the current start value
            start = 1 - start;  // Toggle start value between 1 and 0 // Flipping 
        }

        cout << endl;  // Move to the next line after each row is printed
    }


}




int main() {

    int N;
    cin >> N;

    pattern11(N);

    return 0;
}



