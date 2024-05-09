#include <bits/stdc++.h>
using namespace std;

int main(void) {
    /*
    Second Max of Three Numbers
    Problem Statement

    Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.
    Input

    First line contains the number of triples, N.
    The next N lines which follow each have three space separated integers.

    Output

    For each of the N triples, output one new line which contains the second-maximum integer among the three.
    */

    int n;
    cin >> n;

    while (n--) {
        vector<int> triplets(3);

        for (int i = 0; i < triplets.size(); i++) {
            cin >> triplets[i];
        }

        sort(triplets.begin(), triplets.end());
        cout << triplets[1] << endl;;

    }
    return 0;
}
