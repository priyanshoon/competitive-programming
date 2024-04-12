#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int l = 0, r = nums.size();
    if (target > nums[r - 1]) return r;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (nums[mid] == target) {
            return mid;
        }

        if (nums[mid] > target) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main(void) {
    vector<int> nums = {1,3,5,6};
    int target = 2;
    cout << searchInsert(nums, target) << endl;
    return 0;
}
