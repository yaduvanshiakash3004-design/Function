#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string word = "";

    for (int i = 0; i < s.length(); i++) {

        if (isupper(s[i]) && i != 0) {
            cout << word << endl;
            word = "";
        }

        word += s[i];
    }
    cout << word;

    return 0;
}