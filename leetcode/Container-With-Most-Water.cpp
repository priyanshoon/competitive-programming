#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int result = 0, area;
    int l = 0, h = height.size() - 1;
    while (l < h) {
        area = (h - l) * min(height[l], height[h]);
        result = max(result, area);
        if (height[l] < height[h]) {
            l++;
        } else {
            h--;
        }
    }
    return result;
}

int main(void) {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    return 0;
}
