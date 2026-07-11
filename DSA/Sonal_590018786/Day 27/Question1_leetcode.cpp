#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int read = 0, write = 0;

    while (read < n) {
        char curr = chars[read];
        int cnt = 0;

        while (read < n && chars[read] == curr) {
            cnt++;
            read++;
        }

        chars[write++] = curr;

        if (cnt > 1) {
            string s = to_string(cnt);
            for (char c : s) {
                chars[write++] = c;
            }
        }
    }

    return write;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int len = compress(chars);

    cout << len << "\n";
    for (int i = 0; i < len; i++)
        cout << chars[i] << " ";

    return 0;
}