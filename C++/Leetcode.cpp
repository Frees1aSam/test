#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        inter(digits, 0, "", &ans);
        return cout<<ans;
    }

    void inter(string s, int index, string ans, vector<string> *out)
    {
        if (index == s.length())
        {
            if (ans != "")
                out->push_back(ans);
            return;
        }

        char c[] = { 'a','d','g','j','m','p','t','w' };
        for (int i = 0; i < (s[index] == '9'||s[index]=='7' ? 4 : 3); i++)
        {
            string temp = ans; temp += char(c[s[index] - '2'] + i);
            inter(s, index + 1, temp, out);
        }
    }
};

int main() {
    Solution s;
    vector<string> ans;
    ans = s.letterCombinations("123");
    return 0;
}
