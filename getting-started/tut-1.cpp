#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> A) {
    int ans = 0;
    for(int i = 0; i < A.size(); i++) { // O(n) time complexity
        ans += A[i];
    }
    return ans;
}

int main (int argc, char *argv[]) {
    cout << sum({5,6,7,8,9}) << endl;
    return 0;
}
