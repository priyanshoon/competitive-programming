#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    for (int i = 0; i < haystack.size(); i++) {
        bool flag = false;
        if (haystack[i] == needle[0]) {
            for (int j = 0; j < needle.length(); j++) {
                if(haystack[i + j] != needle[j]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) return i;
        }
    }
    return -1;
}

int main(void) {
    string haystack = "leetcode", needle = "leeto";
    cout << strStr(haystack, needle) << endl;
    return 0;
}
