#include <bits/stdc++.h>
using namespace std;

bool containsDuplicateBruteForce(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i+1; j < nums.size(); j++) {
            if(nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

bool containsDuplicateHashSet(vector<int>& nums) {
    set<int> s(nums.begin(), nums.end());
    int x = nums.size();
    int y = s.size();
    if(x == y)
        return false;
    return true;
}


int main (int argc, char *argv[]) {
    vector<int> nums = {1,2,3,1};
    cout << containsDuplicateBruteForce(nums) << endl;
    cout << containsDuplicateHashSet(nums) << endl;
    return 0;
}
