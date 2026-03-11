#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        long long binary;
        cin >> binary;

        int decimal = 0;
        int power = 1;

        while(binary > 0) {
            int lastDigit = binary % 10;
            decimal += lastDigit * power;
            power *= 2;
            binary /= 10;
        }

        cout << decimal << endl;
    }

    return 0;
}