#include <iostream>
#include <stdio.h>
using namespace std;
int n, odd = 1;
void upperStarPrint(int j, int odd);
void lowerStarPrint(int j, int odd);
int main()
{
    cin >> n;
    for (int i = n - 1; i > 0; i--)
    {
        upperStarPrint(i, odd);
        odd += 2;
    }

    for (int i = 0; i < (2 * n) - 1; i++)
    {
        cout << ".";
    }
    cout<<endl;

    for (int i = 1; i < n; i++)
    {
        odd -= 2;
        lowerStarPrint(i, odd);
    }
}

void upperStarPrint(int j, int odd)
{
    for (int i = j; i > 0; i--)
    {
        cout << "*";
    }

    for (int i = odd; i > 0; i--)
    {
        cout << ".";
    }

    for (int i = j; i > 0; i--)
    {
        cout << "*";
    }

    cout << endl;
}

void lowerStarPrint(int j, int odd)
{
    for (int i = j; i > 0; i--)
    {
        cout << "*";
    }

    for (int i = odd; i > 0; i--)
    {
        cout << ".";
    }

    for (int i = j; i > 0; i--)
    {
        cout << "*";
    }

    cout << endl;
}