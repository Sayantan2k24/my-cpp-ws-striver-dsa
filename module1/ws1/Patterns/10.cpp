/*

// for n = 5

*
**
***
****
*****
****
***
**
*

*/

// #include <iostream>
// using namespace std;

// void pattern2(int n) {
//     for(int i = 0; i<n;i++ ) {
//         for(int j = 0; j<=i; j++){

//             cout<< "*";
//         }

//         cout << endl;
//     }
// }

// void pattern2R(int n) {
//     for (int i=0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1 ; j++  ) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void pattern10(int n) {
//     pattern2(n);
//     pattern2R(n);
// }




#include <iostream>
using namespace std;

//  n = 9
// void pattern10(int n) {
//     for (int i = 1; i <= 2*n - 1; i++) {

//         if (i <= n) {
//             for(int j = 0; j < i; j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }

//         if ( i>5 ) {
//             for (int j=0; j < 2*n -i;j++){
//                 cout << "*";
//             }
//             cout << endl;
//         }
        
//     }
// }

void pattern10(int n) {
    for (int i = 1; i <= 2*n - 1; i++) {
        // for(int j = 0; j < i; j++){
        //     cout << "*";
        // }
        // cout << endl;

        int stars = i; 
        if ( i > n) {  
            stars = 2*n -i; 
        }

        for (int j=1; j <=stars;j++){
            cout << "*";
        }
        cout << endl;

    }
}


int main() {

    int n;
    cin >> n;
    pattern10(n);
    return 0;
}

