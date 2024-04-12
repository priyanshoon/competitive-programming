#include <bits/stdc++.h>
using namespace std;

// brute force
int maxProfit(vector<int>& prices) {
    int result = 0;
    for (int i = 0; i < prices.size(); i++) {
        if (i == prices.size() - 1) return result;

        for (int j = i + 1; j < prices.size(); j++) {
            int profit = prices[j] - prices[i];
            if (profit > result) {
                result = profit;
            }
        }
    }

    return result;
}

int maxProfitOpt(vector<int>& prices) {
    int l = 0, r = 1;
    int maxP = 0;
    while (r < prices.size()) {
        if (prices[l] < prices[r]) {
            int profit = prices[r] - prices[l];
            maxP = max(maxP, profit);
        } else {
            l = r;
        }
        r++;
    }
    return maxP;
}

int main(void) {
    vector<int> prices = {};
    cout << maxProfit(prices) << endl;
    return 0;
}
