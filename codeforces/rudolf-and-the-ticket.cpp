#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

int main (int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // your code
    /*

    The ticket can be purchased at a machine that accepts exactly two coins, the
    sum of which does not exceed k

    */

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        ll ans = 0;
        for (int i = 0; i < a.size(); i++) {
            cin >> a[i];
        }


        for (int i = 0; i < b.size(); i++) {
            cin >> b[i];
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((a[i] + b[j]) <= k) {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}
