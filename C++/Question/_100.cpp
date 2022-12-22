#include <iostream>
#include <map>
using namespace std;
#define endl '\n'
#define space ' '

map<int, int> dp;

int loop(int num) {
    if (num == 1 || dp[num] != 0) return dp[num];

    dp[num] = ((num % 2) ? loop(num * 3 + 1) : loop(num / 2)) + 1;

    return dp[num];
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int maxNumber = -1;
        for (int cnt = min(i, j); cnt <= max(i, j); cnt++) {
            maxNumber = max(loop(cnt) + 1, maxNumber);
        }
        cout << i << space << j << space << maxNumber << endl;
    }
    return 0;
}