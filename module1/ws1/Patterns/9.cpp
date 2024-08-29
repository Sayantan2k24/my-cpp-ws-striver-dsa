/*
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *    
    
// n=5

*/



#include <iostream>
using namespace std;

void pattern9(int n) {
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

void pattern9R(int n) {
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

    int n;
    cin >> n;
    pattern9(n);
    pattern9R(n);
    return 0;
}


