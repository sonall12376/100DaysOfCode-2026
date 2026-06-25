string modifyString(string s) {
    string ans = "";

    for (char ch : s) {
        ch = tolower(ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == 'y') {
            continue;
        }

        ans += '.';
        ans += ch;
    }

    return ans;
}