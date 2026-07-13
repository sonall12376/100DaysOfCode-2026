#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str) {
    stack<char> s;

    for (char ch : str) {

        // Opening brackets
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        // Closing brackets
        else {
            // No opening bracket available
            if (s.empty()) {
                return false;
            }

            // Check for matching pair
            if ((ch == ')' && s.top() == '(') ||
                (ch == '}' && s.top() == '{') ||
                (ch == ']' && s.top() == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }

    // Valid only if all brackets are matched
    return s.empty();
}

int main() {
    string str;
    cin >> str;

    if (isValid(str))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}