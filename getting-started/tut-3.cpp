#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

int main (int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    int t;
    cin >> t;

    while(t--) {
        int k;
        cin >> k;

        for(int i = 1; ; i++) {
            if(i % 3 == 0 or i % 10 == 3) continue;

            if(--k == 0) {
                cout << i << "\n";
                break;
            }
        }

    }
}
