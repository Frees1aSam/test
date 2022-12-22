#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int cnt = 0, temp = 0, n = 0;
    char ch = ' ';
    vector<int> nums;
    int sum[500] = {0};
    cin >> cnt;
    for (int i = 0; i < cnt; i++) {
        cin >> n;
        while (cin >> temp) {
            nums.push_back(temp);
            ch = getchar();
            if (ch == '\n') {
                break;
            }
        }
        sort(nums.begin(), nums.end());
        if (n % 2 == 1) {
            temp = nums[n / 2];
        } else {
            temp = (nums[(n / 2) - 1] + nums[n / 2]) / 2;
        }
        for (int c = 0; c < n; c++) {
            sum[i] += abs(temp - nums[c]);
        }

        nums.clear();
    }
    for (int i = 0; i < cnt; i++) {
        cout << sum[i] << '\n';
    }
    return 0;
}