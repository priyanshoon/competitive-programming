#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> numbers;
    int result;
    for (int i = 0; i < tokens.size(); i++) {
        if (tokens[i] == "+") {
            int a = numbers.top();
            numbers.pop();
            int b = numbers.top();
            numbers.pop();
            numbers.push(a + b);
        } else if (tokens[i] == "-") {
            int a = numbers.top();
            numbers.pop();
            int b = numbers.top();
            numbers.pop();
            numbers.push(b - a);
        } else if (tokens[i] == "*") {
            int a = numbers.top();
            numbers.pop();
            int b = numbers.top();
            numbers.pop();
            numbers.push(a * b);
        } else if (tokens[i] == "/") {
            int a = numbers.top();
            numbers.pop();
            int b = numbers.top();
            numbers.pop();
            numbers.push(b / a);
        } else {
            numbers.push(stoi(tokens[i]));
        }
    }
    return numbers.top();
}

int main(void) {
    vector<string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout << evalRPN(tokens) << endl;
    return 0;
}
