#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int mid, low = 0, high = nums.size();
    int result = -1;
    while (low < high) {
        mid = (low + high) / 2;
        if (nums[mid] == target) {
            result = mid;
            break;
        } else if (nums[mid] > target) {
            high--;
        } else {
            low++;
        }
    }
    return result;
}

int main(void) {
    vector<int> nums = {5};
    int target = 5;
    cout << search(nums, target) << endl;
    return 0;
}
