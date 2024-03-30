#include <bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
    int pod = 1;
    int sod = 0;
    int result;
    while (n != 0) {
        int dig = n % 10;
        n /= 10;
        pod *= dig;
        sod += dig;
    }
    result = pod - sod;
    return result;
}

int main(void) {
    int n = 234;
    cout << subtractProductAndSum(n) << endl;
    return 0;
}
