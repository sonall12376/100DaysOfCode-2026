#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    // Push all characters
    for (char ch : s) {
        st.push(ch);
    }

    // Pop and print
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}