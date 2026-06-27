long long countDistinct(string s) {
    int n = s.size();
    vector<long long> dp(n + 1, 0);
    unordered_map<char, int> last;

    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        dp[i] = 2 * dp[i - 1];

        if (last.count(s[i - 1])) {
            dp[i] -= dp[last[s[i - 1]] - 1];
        }

        last[s[i - 1]] = i;
    }

    return dp[n];
}