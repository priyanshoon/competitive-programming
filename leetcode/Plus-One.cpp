#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    for (int i = digits.size() - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        } else {
            digits[i] = 0;
        }
    }
    vector<int> result(digits.size() + 1);
    result[0] = 1;
    return result;
}

int main(void) {
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << '\n';
    return 0;
}
