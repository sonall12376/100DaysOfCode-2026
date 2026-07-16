#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        stack<char> st;

        for (char ch : s) {
            if (!st.empty() &&
                ((st.top() == 'A' && ch == 'B') ||
                 (st.top() == 'C' && ch == 'D'))) {
                st.pop();
            } else {
                st.push(ch);
            }
        }

        return st.size();
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    cout << obj.minLength(s) << endl;

    return 0;
}