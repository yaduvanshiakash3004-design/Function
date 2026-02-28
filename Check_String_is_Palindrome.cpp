#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool isPalindrome = true;
    int n = str.length();

    for(int i = 0; i < n/2; i++) {
        if(str[i] != str[n-1-i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}