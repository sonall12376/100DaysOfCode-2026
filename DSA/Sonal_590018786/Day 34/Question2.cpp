#include <bits/stdc++.h>
using namespace std;

int maximumPeopleVisible(vector<int>& arr) {
    int n = arr.size();

    vector<int> left(n), right(n);
    stack<int> st;

    // Visible towards left
    while (!st.empty()) st.pop();

    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] < arr[i])
            st.pop();

        if (st.empty())
            left[i] = i;
        else
            left[i] = i - st.top();

        st.push(i);
    }

    // Visible towards right
    while (!st.empty()) st.pop();

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] < arr[i])
            st.pop();

        if (st.empty())
            right[i] = n - 1 - i;
        else
            right[i] = st.top() - i;

        st.push(i);
    }

    int ans = 1;

    for (int i = 0; i < n; i++)
        ans = max(ans, left[i] + right[i] + 1);

    return ans;
}

int main() {
    vector<int> arr = {6,2,5,4,5,1,6};

    cout << maximumPeopleVisible(arr);

    return 0;
}