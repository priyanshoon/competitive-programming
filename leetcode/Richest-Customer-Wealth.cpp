#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    vector<int> wealthOfEach;
    for (int i = 0; i < accounts.size(); i++) {
        int sum = 0;
        for (int j = 0; j < accounts[i].size(); j++) {
            sum = sum + accounts[i][j];
        }
        wealthOfEach.push_back(sum);
    }
    return *max_element(wealthOfEach.begin(), wealthOfEach.end());
}

int main(void) {
    vector<vector<int>> account = {{2,8,7}, {7,1,3}, {1,9,5}};
    cout << maximumWealth(account) << endl;
    return 0;
}
