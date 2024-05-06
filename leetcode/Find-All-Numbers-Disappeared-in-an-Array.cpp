#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> result;
    set<int> s(nums.begin(), nums.end());
    for (int i = 1; i <= nums.size(); i++) {
        if (s.find(i) == s.end()) {
            result.push_back(i);
        }
    }
    return result;
}

int main(void) {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumbers(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

