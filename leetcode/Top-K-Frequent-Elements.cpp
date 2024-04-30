#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> count;
    int n = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }

    vector<vector<int>> buckets(n + 1);
    for (auto it = count.begin(); it != count.end(); it++) {
        buckets[it->second].push_back(it->first);
    }

    vector<int> result;
    for (int i = n; i >= 0; i--) {
        if (result.size() >= k) {
            break;
        } else {
            result.insert(result.end(), buckets[i].begin(), buckets[i].end());
        }
    }

    return result;
}

int main(void) {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> result = topKFrequent(nums, k);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
