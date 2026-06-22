bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(),
            [](char c) {
                return !isalnum((unsigned char)c);
            }), s.end());

        // convert to lowercase
        for (char &c : s) {
            c = tolower((unsigned char)c);
        }

        int st = 0, end = s.size() - 1;

        while (st < end) {
            if (s[st] != s[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }