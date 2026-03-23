#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 1; i++) {
        cout << s[i];

        int diff = s[i + 1] - s[i];
        cout << diff;
    }

    cout << s[s.length() - 1];

    return 0;
}