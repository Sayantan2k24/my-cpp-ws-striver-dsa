// N=6

/*

1          1
12        21
123      321
1234    4321
12345  54321
123456654321

*/




// SOLUTION 1

// i = 0 based index
// j = 0 based index

#include <iostream>
using namespace std;

void pattern12Sol1(int n) {
    for (int i = 0; i < n; i++) {
        // numbers // right angle triangle
        for (int j = 0; j<=i;j++){
            cout << j+1;
        }

        // spaces // 10,8,6,4,2,0 times // 2*n -2*i - 2
        for (int j = 0; j < 2*n -2*i -2; j++ ) {
            cout << " ";
        }

        // numbers // flipped right angle triangle
        for (int j=i; j >= 0; j--){
            cout << j+1;
        }

        cout << endl;
    }
}


// SOLUTION 2

// i = 1 based index
// j = 1 based index

// here number of elements in `i`th row  is  equivalent to i
// 1st row, 1 element
// 2nd row , 2 elements ..

#include <iostream>
using namespace std;

void pattern12Sol2(int n) {

    for (int i = 1; i <=n; i++) {

        // numbers // right angle triangle
        for (int j=1; j<=i; j++) { 
            cout << j;
        }
        
        // spaces 10,8,6,4,2,0 // 2*n - 2*i

        for (int j=1; j <= 2*n - 2*i; j++) {
            cout << " "; 
        }


        // numbers // flipped right angle triangle
        for (int j =i;j >=1; j--) {
            cout << j;
        }
            
        cout << endl;

    }
}

// SOLUTION 3

// i = 1 based index
// j = 1 based index

#include <iostream>
using namespace std;

void pattern12Sol3(int n) {
    int space = 2*n - 2; 

    for (int i = 1; i <=n; i++){
        // numbers // right angle triangle
        for (int j=1; j<=i; j++) { 
            cout << j;
        }
        
        // spaces // 2*n - 2
        for (int j=1; j <= space; j++) {
            cout << " "; 
        } 

        // numbers // flipped right angle triangle
        for (int j =i;j >=1; j--) {
            cout << j;
        }
            
        cout << endl;
        space = space - 2; 
    }
}


int main() {

    int N;
    cin >> N;

    pattern12Sol1(N);
    pattern12Sol2(N);
    pattern12Sol3(N);

    return 0;
}


