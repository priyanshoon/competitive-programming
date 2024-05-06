#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int length = 0;
    bool counting = false;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            counting = true;
            length++;
        } else if (counting) {
            break;
        }
    }
    return length;
}

int main(void) {
    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s) << endl;
    return 0;
}
