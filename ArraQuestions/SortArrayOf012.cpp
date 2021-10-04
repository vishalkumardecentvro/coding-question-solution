#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int hashArr[3] = {0};
    for (int i = 0; i < n; i++)
    {
        hashArr[arr[i]]++;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << hashArr[i];
    }
    for (int i = 0; i < 3; i++)
    {

        while (hashArr[i] > 0)
        {
            cout << i;
            hashArr[i]--;
        }
    }
}