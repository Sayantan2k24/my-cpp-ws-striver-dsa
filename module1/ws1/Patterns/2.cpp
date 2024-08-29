/*
*
**
***
****
*****
// n=5

*/

#include <iostream>
using namespace std;


void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        
        for ( int j = 0; j < i+1 ; j++ ) {
            cout << "*";
            
        }
        cout << endl;
    }
}
int main() {
    int N;
    cin >> N;
    pattern1(N);    

    return 0;
}