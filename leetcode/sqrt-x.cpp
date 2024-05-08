#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    int result = 0;
    int l = 0, r = x;
    while (l <= r) {
        long long int mid = l + floor((r - l) / 2);
        if (mid * mid > x) {
            r = mid - 1;
        } else if (mid * mid < x) {
            l = mid + 1;
            result = mid;
        } else {
            return mid;
        }
    }
    return result;
}

int main(void) {
    int x = 8;
    cout << mySqrt(x) << endl;
    return 0;
}
