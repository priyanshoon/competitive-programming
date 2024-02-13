#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    int n = s.length();
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++) {
        m[s[i]]++;
        m[t[i]]--;
    }
    for (auto it : m) {
        if (it.second != 0) return false;
    }
    return true;
}

int main (int argc, char *argv[]) {
    string s = "anagram";
    string t = "nagaram";
    cout << isAnagram(s, t) << endl;
    return 0;
}
