#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        int n = prices.size();
        vector<int> ans = prices;
        stack<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && prices[st.top()] >= prices[i]) {
                ans[st.top()] -= prices[i];
                st.pop();
            }

            st.push(i);
        }

        return ans;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    Solution obj;
    vector<int> ans = obj.finalPrices(prices);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}