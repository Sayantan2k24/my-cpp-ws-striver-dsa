#include <iostream>
using namespace std;

void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {  // This should be j < i
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    pattern4(N);    

    return 0;
}
