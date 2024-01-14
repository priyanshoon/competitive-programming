#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> resultVec;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i+1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                resultVec.push_back(i);
                resultVec.push_back(j);
                return resultVec;
            }
        }
    }
    return resultVec;
}

int main (int argc, char *argv[]) {
    vector<int> nums = {3,2,4};
    vector<int> resultVec = twoSum(nums, 6);
    for(int i = 0; i < resultVec.size(); i++) {
        cout << resultVec[i] << endl;
    }
    return 0;
}
