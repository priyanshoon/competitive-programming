#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

int main (int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // your code
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a < b) && (b < c)) {
            cout << "STAIR" << endl;
        } else if ((a < b) && (b > c)) {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        }
    }
}
