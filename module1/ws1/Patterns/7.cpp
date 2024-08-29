/*
    *
   ***
  *****
 *******
*********

*/

#include <iostream>
using namespace std;

void pattern7(int n) {
    for (int i =0; i < n; i++) {
        // space # 43210
        for (int j = 0; j < n -i -1; j++) {
            cout << " ";
        }

        // stars # 13579
        for (int j=0; j < 2*i + 1; j++) {
            cout << "*";
        }

        // space # 43210
        for (int j = 0; j < n -i -1; j++) {
            cout << " ";
        }
        
        cout << endl;

    }
}


int main() {
    int N;
    cin >> N;
    pattern7(N);    

    return 0;
}