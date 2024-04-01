#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
    bool result = true;
    set<char> letters;
    for (int i = 0; i < sentence.size(); i++) {
        letters.insert(sentence[i]);
    }
    if (letters.size() != 26) {
        result = false;
    }
    return result;
}

int main(void) {
    string sentence = "leetcode";
    cout << checkIfPangram(sentence) << endl;
    return 0;
}
