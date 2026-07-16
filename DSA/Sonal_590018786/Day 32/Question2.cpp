#include <iostream>
#include <stack>
using namespace std;

void copyStack(stack<int> &st, stack<int> &copy) {
    stack<int> temp;

    // Step 1: Move original stack to temporary stack
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }

    // Step 2: Restore original stack and create the copy
    while (!temp.empty()) {
        st.push(temp.top());     // Restore original
        copy.push(temp.top());   // Copy
        temp.pop();
    }
}

int main() {
    stack<int> st;

    // Input: 1 2 3 4
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> copied;

    copyStack(st, copied);

    // Print copied stack in original order
    stack<int> printStack;
    while (!copied.empty()) {
        printStack.push(copied.top());
        copied.pop();
    }

    cout << "[";
    while (!printStack.empty()) {
        cout << printStack.top();
        printStack.pop();
        if (!printStack.empty())
            cout << ",";
    }
    cout << "]";

    return 0;
}