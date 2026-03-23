#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    string s;
    cin >> s;

    int left = 0;
    int countA = 0, countB = 0;
    int ans = 0;

    for (int right = 0; right < s.length(); right++) {

        if (s[right] == 'a') countA++;
        else countB++;
        while (min(countA, countB) > k) {
            if (s[left] == 'a') countA--;
            else countB--;
            left++;
        }
        ans = max(ans, right - left + 1);
    }

    cout << ans;
    return 0;
}