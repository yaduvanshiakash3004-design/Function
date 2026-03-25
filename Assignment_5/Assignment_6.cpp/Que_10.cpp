#include <iostream>
using namespace std;

string removeConsecutiveDuplicates(string s) {
    string result = "";

    // First character always included
    result += s[0];

    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    cout << removeConsecutiveDuplicates(s);

    return 0;
}