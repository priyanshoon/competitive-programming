#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string temp;
    string temp2;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i]) || isalnum(s[i])) {
            temp.push_back(tolower(s[i]));
            temp2.push_back(tolower(s[i]));
        }
    }

    reverse(temp.begin(), temp.end());

    if (temp == temp2) {
        return true;
    }

    return false;
}

int main(void) {
    string s = "race a car";
    cout << isPalindrome(s) << endl;
    return 0;
}
