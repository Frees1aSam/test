#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    int temp = 0;
    while (getline(cin, n)) {
        n.erase(std::remove(n.begin(), n.end(), ' '), n.end());
        temp = stoi(n);
        if (temp == 0) break;
        if (temp % 11 == 0) {
            cout << n << " is a multiple of 11." << endl;
        } else {
            cout << n << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}