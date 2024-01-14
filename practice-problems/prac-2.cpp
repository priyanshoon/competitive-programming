#include <bits/stdc++.h>
using namespace std;

vector<string> tag_stack;
map<string, string> attrs;

int main (int argc, char *argv[]) {
    int n, q;
    cin >> n >> q;

    for(int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if(cin.peek() == '/') {
            string cn;
            cin >> cn;
            tag_stack.pop_back();
        } else {
            string name;
            cin >> name;
            if(name.back() == '>') {
                name.pop_back();
                tag_stack.push_back(name);
            } else {
                tag_stack.push_back(name);

                for(;;) {
                    string attr_name, attr_val, eq;
                    cin >> attr_name >> eq >> attr_val;
                    if(attr_val.back() == '>') {
                        attr_val.pop_back();
                    }
                }
            }
        }
    }
    return 0;
}
