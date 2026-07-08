#include <iostream>
#include <unordered_set>
using namespace std;

bool isHappy(int n) {
    unordered_set<int> st;

    while (n != 1 && st.find(n) == st.end()) {
        st.insert(n);

        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;
    }

    return n == 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isHappy(n))
        cout << n << " is a Happy Number." << endl;
    else
        cout << n << " is not a Happy Number." << endl;

    return 0;
}