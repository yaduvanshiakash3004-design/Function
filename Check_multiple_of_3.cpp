#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 3 == 0)
        cout << "Multiple of 3";
    else
        cout << "Not multiple of 3";

    return 0;
}