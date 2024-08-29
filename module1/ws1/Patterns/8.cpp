/*
*********
 *******  
  *****
   ***
    *
// n=5

*/



#include <iostream>
using namespace std;

void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        // space # 0,1,2,3,4
        for (int j = 0; j < i ; j++) {
            cout << " ";
        }

        // stars # 9,7,5,3,1
        for (int j=0; j < 2*n -2*i -1; j++) {
            cout << "*";
        }

        // space # 0,1,2,3,4
        for (int j = 0; j < i ; j++) {
            cout << " ";
        }
        cout << endl;

    }
}


int main() {
    int N;
    cin >> N;
    pattern8(N);    

    return 0;
}
