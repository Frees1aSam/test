#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long int n1 = 0, n2 = 0;
    int cnt = 0, temp1 = 0, temp2 = 0, carry = 0, c = 0;
    vector<int> nums;
    while (cin >> n1 >> n2) {
        if (n1 == 0 && n2 == 0) break;
        while ((double)n1 / 10 != 0 && (double)n2 / 10 != 0 || carry) {
            temp1 = n1 % 10;
            temp2 = n2 % 10;
            n1 /= 10;
            n2 /= 10;
            if ((temp1 + temp2 + carry) / 10 >= 1) {
                cnt += 1;
                carry = (temp1 + temp2 + carry) / 10;
            } else {
                carry = 0;
            }
        }
        nums.push_back(cnt);
        cnt = 0, carry = 0;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            cout << nums[i] << " "
                 << "carry operation.\n";
        } else if (nums[i]) {
            cout << nums[i] << " "
                 << "carry operations.\n";
        } else {
            cout << "No carry operation.\n";
        }
    }
    // cout << endl;
    return 0;
}