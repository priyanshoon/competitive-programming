#include <bits/stdc++.h>
#include <string>
using namespace std;

// solving this with stack concept

int calPoint(vector<string>& operations) {
    int sum = 0;
    vector<int> scores;

    for(int i = 0; i < operations.size(); i++) {
        if(operations[i] == "+") {
            scores.push_back(scores[scores.size() - 1] + scores[scores.size() - 2]);
        } else if(operations[i] == "D") {
            scores.push_back(scores[scores.size() - 1] * 2);
        } else if(operations[i] == "C") {
            scores.pop_back();
        } else {
            scores.push_back(stoi(operations[i]));
        }
    }

    for(int i = 0; i < scores.size(); i++) {
        sum += scores[i];
    }

    return sum;
}

int main (int argc, char *argv[]) {
    vector<string> operations = {"5","-2","4","C","D","9","+","+"};
    cout << calPoint(operations) << endl;
    return 0;
}
