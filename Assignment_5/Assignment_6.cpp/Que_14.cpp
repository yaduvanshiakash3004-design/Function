#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int freq[256] = {0};

    // Count frequency
    for (char ch : s)
    {
        freq[ch]++;
    }

    char ans;
    int maxFreq = 0;

    // Find max frequency character
    for (char ch : s)
    {
        if (freq[ch] > maxFreq)
        {
            maxFreq = freq[ch];
            ans = ch;
        }
    }

    cout  << ans;

    return 0;
}