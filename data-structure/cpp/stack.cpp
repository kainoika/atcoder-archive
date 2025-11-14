#include <bits/stdc++.h>
using namespace std;

bool solution(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
            continue;
        }

        if (st.empty()) {
            return false;
        }

        char ck = st.top();
        if ((c == '(' && ck == ')') || (c == '{' && ck == '}') ||
            (c == '[' && ck == ']')) {
            st.pop();
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string test = "{}()[[()]]";
    bool ans = solution(test);

    return ans;
}