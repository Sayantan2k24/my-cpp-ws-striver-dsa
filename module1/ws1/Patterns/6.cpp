/*
12345
1234
123
12
1

// n=5

*/


#include <iostream>
using namespace std;

void pattern6(int n) {
    for(int i=0; i < n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << j+1;
        }
        cout << endl;
    }
}


int main() {
    int N;
    cin >> N;
    pattern6(N);    

    return 0;
}
