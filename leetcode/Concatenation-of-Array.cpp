#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> temp = nums;
    for(int i = 0; i < nums.size(); i++) {
        temp.push_back(nums[i]);
    }
    return temp;
}

int main (int argc, char *argv[]) {
    vector<int> nums = {1, 2, 1};
    vector<int> result = getConcatenation(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
