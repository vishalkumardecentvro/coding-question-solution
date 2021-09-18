#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, t, count = 100, flag = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int temp = 0, count = 0, remainder, rev;
        cin >> n;
        temp = n;
        while (temp != 0)
        {
            remainder = temp % 10;
            cout << "remainder" << remainder;
            if (remainder != 0)
            {
                if (n % remainder == 0)
                {
                    count++;
                }
            }
            temp = temp / 10;
        }
        cout << count;
    }
}