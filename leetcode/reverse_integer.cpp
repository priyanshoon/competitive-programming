#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    long result = 0;
    while (x) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    if (result > INT_MAX || result < INT_MIN) return 0;
    return (int)(result);
}

int main(void) {
    int x = -123;
    cout << reverse(x) << endl;
    return 0;
}
