#include <iostream>

using namespace std;

int cnt(int n) {
    
    int res = 0;
    if (n / 10 == 0) {
        return n;
    } 
    else 
    {
        while ((float)n / 10.0f != 0.0f) {
            res += n % 10;
            n = n / 10;
        }
        return cnt(res);
    }
     
}
int main() {
    int n = 0, res = 0;

    while (cin >> n) {
        if (n == 0) break;
        cout << cnt(n) << endl;
    }
    return 0;
}