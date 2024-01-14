#include <bits/stdc++.h>
using namespace std;

int main (int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j, s = 0;
    cin >> i >> j;
    int *arr[i];
    while(i--) {
        int num;
        cin >> num;
        arr[s] = new int[num];
        for(int u = 0; u < num; u++) {
            cin >> arr[s][u];
        }
        s++;
    }
    while(j--) {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}
