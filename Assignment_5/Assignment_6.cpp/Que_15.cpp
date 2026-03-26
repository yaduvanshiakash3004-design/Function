#include <iostream>
using namespace std;

int countPalindromes(string s) {
    int n = s.length();
    int count = 0;

    for (int center = 0; center < n; center++) {

        // Odd length palindromes
        int left = center, right = center;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }

        // Even length palindromes
        left = center;
        right = center + 1;
        while (left >= 0 && right < n && s[left] == s[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    string s;
    cin >> s;

    cout << countPalindromes(s);

    return 0;
}