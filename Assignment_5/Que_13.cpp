#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long i = 0;

    while (i * i <= x) {
        i++;
    }

    cout << i - 1;

    return 0;
}