#include <bits/stdc++.h>
using namespace std;

// bruteforce method
int firstMissingPositive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    for (int i = 1; i <= 2147483647; i++) {
        if (s.find(i) == s.end()) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    vector<int> nums = {1,2,0};
    cout << firstMissingPositive(nums) << endl;
    return 0;
}
