#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);

    int i = 0, j = n - 1;
    int k = n - 1;

    while (i <= j) {
        int left = nums[i] * nums[i];
        int right = nums[j] * nums[j];

        if (left > right) {
            ans[k] = left;
            i++;
        } else {
            ans[k] = right;
            j--;
        }
        k--;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = sortedSquares(nums);

    cout << "Sorted squares: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}