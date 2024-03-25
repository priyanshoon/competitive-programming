#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int>result;
    int l = 0, r = numbers.size() - 1;
    int curSum;

    while (l < r) {
        curSum = numbers[l] + numbers[r];

        if (curSum > target) {
            r = r - 1;
        } else if (curSum < target) {
            l = l + 1;
        } else {
            result.push_back(l+1);
            result.push_back(r+1);
            return result;
        }
    }
    return result;
}

int main(void) {
    vector<int> numbers = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(numbers, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
