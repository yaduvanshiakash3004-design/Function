#include <iostream>
#include <vector>
using namespace std;

// LeetCode 242 - Valid Anagram

bool isAnagram(string s, string t) {

    if (s.length() != t.length())
        return false;

    vector<int> freq(26,0);

    for(char c : s)
        freq[c-'a']++;

    for(char c : t)
        freq[c-'a']--;

    for(int x : freq)
        if(x != 0)
            return false;

    return true;
}

int main() {

    string s = "anagram";
    string t = "nagaram";

    if(isAnagram(s,t))
        cout<<"True";
    else
        cout<<"False";

    return 0;
}