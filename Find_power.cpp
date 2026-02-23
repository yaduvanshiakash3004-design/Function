#include <iostream>
using namespace std;

int main() {
    int base, exp;
    cin >> base >> exp;

    int result = 1;

    for(int i=1; i<=exp; i++)
        result *= base;

    cout << result;

    return 0;
}
