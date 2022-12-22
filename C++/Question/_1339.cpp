#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int a[26], b[26], n[105], m[105], l;
    string s1, s2;
    while (cin >> s1 >> s2){
        l = s1.length();
        // initialize array
        for (int i = 0; i < 26; i++){
            a[i] = 0;
            b[i] = 0;
        }
        // count every char and store in array 
        for (int i = 0; i < l; i++){
            a[s1[i]-'A']++;
            b[s2[i]-'A']++;
            n[i] = 0;
            m[i] = 0;
        }
        // store every char count 
        for (int i = 0; i < 26; i++){
            n[a[i]]++;
            m[b[i]]++;
            
        }
        // 確認每個出現字母的次數相等
        bool flag = true;
        for (int i = 0; i < l; i++){
            if (n[i] != m[i]){
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}