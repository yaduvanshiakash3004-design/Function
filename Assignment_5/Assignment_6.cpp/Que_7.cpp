#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0, maxLen = 0;

    for (int i = 0; i < s.length(); i++) {

        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            count++;
            if (count > maxLen) {
                maxLen = count;
            }
        }
         else 
        {
            count = 0; 
        }
    }

    cout << maxLen;

    return 0;
}