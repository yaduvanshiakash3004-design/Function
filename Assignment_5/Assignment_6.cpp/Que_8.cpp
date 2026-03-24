#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int freq[256] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
        }

        char ans = '#';

        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1) {
                ans = s[i];
                break;
            }
        }

        if (ans == '#') cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}