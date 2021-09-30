#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
    int n, j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        j = n - 1 - i;
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}