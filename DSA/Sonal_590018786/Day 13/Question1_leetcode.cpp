string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        string word = "";
        string ans = "";
        int maxi = 0;

        paragraph += ' '; // To process the last word

        for (char c : paragraph) {
            if (isalpha(c)) {
                word += tolower(c);
            } else {
                if (!word.empty()) {
                    if (!ban.count(word)) {
                        freq[word]++;
                        if (freq[word] > maxi) {
                            maxi = freq[word];
                            ans = word;
                        }
                    }
                    word.clear();
                }
            }
        }

        return ans;
    }