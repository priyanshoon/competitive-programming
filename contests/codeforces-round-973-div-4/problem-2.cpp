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
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2) cout << "..";
                else cout << "##";
            }
            cout << endl;
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2) cout << "..";
                else cout << "##";
            }
            cout << endl;
        }
    }
}
