#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void cardGame(vector<int>& cards) {
    int l = 0;
    int r = cards.size() - 1;

    int p1 = 0, p2 = 0;
    bool turn = true;

    while (l <= r) {
        int pick;

        if (cards[l] >= cards[r]) {
            pick = cards[l++];
        } else {
            pick = cards[r--];
        }

        if (turn)
            p1 += pick;
        else
            p2 += pick;

        turn = !turn;
    }

    cout << p1 << " " << p2;
}