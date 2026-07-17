#include <bits/stdc++.h>
using namespace std;

string postfixToPrefix(string s) {
    stack<string> st;

    for (char ch : s) {

        // Operand
        if (isalpha(ch)) {
            st.push(string(1, ch));
        }

        // Operator
        else {
            string op2 = st.top();
            st.pop();

            string op1 = st.top();
            st.pop();

            string temp = ch + op1 + op2;

            st.push(temp);
        }
    }

    return st.top();
}

int main() {
    string s;
    cin >> s;

    cout << postfixToPrefix(s);

    return 0;
}