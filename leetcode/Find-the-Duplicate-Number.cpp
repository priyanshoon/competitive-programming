#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int result = -1;
    sort(nums.begin(), nums.end());
    int l = 0, r = nums.size() - 1;
    while (l <= r) {

    }
    return result;
}

int main(void) {
    vector<int> nums = {1,3,4,2,2};
    cout << findDuplicate(nums) << endl;
    return 0;
}
