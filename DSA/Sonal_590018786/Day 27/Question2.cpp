#include <bits/stdc++.h>
using namespace std;

long long countSubarraysAtMost(vector<int>& arr, int bound) {
    long long ans = 0;
    long long len = 0;

    for (int x : arr) {
        if (x <= bound)
            len++;
        else
            len = 0;

        ans += len;
    }

    return ans;
}

long long countSubarrays(vector<int>& arr, int l, int r) {
    return countSubarraysAtMost(arr, r) -
           countSubarraysAtMost(arr, l - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int l = 2, r = 5;

    cout << countSubarrays(arr, l, r);

    return 0;
}