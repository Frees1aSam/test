#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long int n1 = 0, n2 = 0;
    vector<long long int> nums;
    while (cin >> n1 >> n2) {
        cout << abs(n1 - n2) << '\n';
    }

    return 0;
}