#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    int result = 0;
    int sign = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            continue;
        }

        if (s[i] == '-') {
            sign = -1;
            continue;
        } else if (s[i] == '+') {
            sign = 1;
            continue;
        }

        int temp = s[i] - '0';

        if (temp >= 0 && temp <= 9) {
            result = result * 10 + temp;
        } else {
            return result * sign;
        }
    }
    return result * sign;
}

int main(void) {
    string s = "0-1";
    cout << myAtoi(s) << endl;
    return 0;
}
