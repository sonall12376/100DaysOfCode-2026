int findSubString(string str) {
    unordered_set<char> st(str.begin(), str.end());
    int distinct = st.size();

    unordered_map<char, int> mp;
    int i = 0, j = 0;
    int ans = INT_MAX;

    while (j < str.size()) {
        mp[str[j]]++;

        while (mp.size() == distinct) {
            ans = min(ans, j - i + 1);

            mp[str[i]]--;
            if (mp[str[i]] == 0)
                mp.erase(str[i]);

            i++;
        }

        j++;
    }

    return ans;
}