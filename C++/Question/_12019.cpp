#include <iostream>

using namespace std;

// first Sat
int main()
{
    int cnt = 0, mon = 0, day = 0, temp = 0;
    cin >> cnt;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < cnt; i++)
    {
        cin >> mon;
        cin >> day;
        for (int j = 0; j < mon - 1; j++)
        {
            temp += month[j];
        }
        temp = temp + day;
        if (temp % 7 == 1)
        {
            cout << "Saturday";
        }
        else if (temp % 7 == 2)
        {
            cout << "Sunday";
        }
        else if (temp % 7 == 3)
        {
            cout << "Monday";
        }
        else if (temp % 7 == 4)
        {
            cout << "Tuesday";
        }
        else if (temp % 7 == 5)
        {
            cout << "Wednesday";
        }
        else if (temp % 7 == 6)
        {
            cout << "Thursday";
        }
        else if (temp % 7 == 0)
        {
            cout << "Friday";
        }
        cout << endl;
    }

    return 0;
}