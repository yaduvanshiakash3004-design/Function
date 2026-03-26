#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    int j = s.length() - 1;

    bool isPalindrome = true;

    while (i < j) {
        if (s[i] != s[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome) cout << "true";
    else cout << "false";

    return 0;
}