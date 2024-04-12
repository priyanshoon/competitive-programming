#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxLeft = height[left];
    int maxRight = height[right];
    int result = 0;
    while (left < right) {
        if (maxLeft < maxRight) {
            left++;
            maxLeft = max(maxLeft, height[left]);
            result += maxLeft - height[left];
        } else {
            right--;
            maxRight = max(maxRight, height[right]);
            result += maxRight - height[right];
        }
    }

    return result;
}

int main(void) {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(height) << endl;
    return 0;
}
