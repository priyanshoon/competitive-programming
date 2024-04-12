#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> finalResult;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if ((nums[i] == nums[i - 1]) && (i > 0)) {
            continue;
        }
        int l = i + 1, r = nums.size() - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum  > 0) {
                r--;
            } else if (sum < 0) {
                l++;
            } else {
                finalResult.push_back({nums[i], nums[l], nums[r]});
                l++;
                r--;
                while ((nums[l] == nums[l - 1]) && (l < r)) {
                    l++;
                }
                while ((nums[r] == nums[r + 1]) && (l < r)) {
                    r--;
                }
            }
        }
    }
    return finalResult;
}

int main(void) {
    vector<int> test_case = {0,0,0};
    vector<vector<int>> result = threeSum(test_case);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
