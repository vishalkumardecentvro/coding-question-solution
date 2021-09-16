#include <iostream>
#include <stdio.h>
#include <sstream>
using namespace std;
void printStair(int *array, int n);
int main()
{
    string time;
    string h1, h2;
    stringstream str;
    cin >> time;

    h1 = time[0];
    h2 = time[1];

    str << h1 + h2;
    int hour;
    str >> hour;
    int dummyHour = hour;

    if (time[8] == 'A')
    {
        if (hour == 12)
        {
            cout << "00";
            for (int i = 2; i < 8; i++)
            {
                cout << time[i];
            }
        }

        else{
            for (int i = 0; i < 8; i++)
            {
                cout << time[i];
            }

        }
    }

    if (time[8] == 'P')
    {
        if (hour == 12)
        {
            for (int i = 0; i < 8; i++)
            {
                cout << time[i];
            }
        }

        else{
            hour += 12;
            cout<<hour;
            for (int i = 2; i < 8; i++)
            {
                cout << time[i];
            }

        }
    }

}