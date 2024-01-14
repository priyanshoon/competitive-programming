#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr long double ESP = 1e-9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // int a = 234234235;
    // ll b = (ll)a*a;
    // cout << b << "\n";

    // ll a = 2e10; // 20000000000
    // cout << a << "\n";

    // double x, y;
    // if(abs(x - y) < ESP) {
    //     // x is equal to y
    // } else {
    //     // unequal
    // }

    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for(int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }

    // vector<double> A(n);
    // transform(begin(a), end(a), begin(A), [](int x) {return (double)x;});

    // double x = 3.144159254334;
    // cout << x << "\n";

    int n = 5;
    ll sum = ((ll)n * (n + 1)) / 2;

    cout << sum << "\n";

    return 0;
}
