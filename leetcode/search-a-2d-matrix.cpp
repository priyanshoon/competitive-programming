#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    for (int i = 0; i < matrix.size(); i++) {
        int l = 0, h = matrix[i].size(), mid;
        while (l < h) {
            mid = (l + h) / 2;
            if (matrix[i][mid] == target) {
                return true;
            } else if (matrix[i][mid] > target) {
                h--;
            } else {
                l++;
            }
        }
    }
    return false;
}

int main(void) {
    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 3;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}
