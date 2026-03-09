#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int countZero = 0;
    int x;

    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x == 0) {
            countZero++;
        }
    }

    // Print all 0s
    for(int i = 0; i < countZero; i++) {
        cout << 0 << " ";
    }

    // Print all 1s
    for(int i = 0; i < n - countZero; i++) {
        cout << 1 << " ";
    }

    return 0;
}