#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, k, count = 0;
    cin >> n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    int max = arr[0];
    count++;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < max)
        {

            if (count == k-1)
            {
                cout << "max = " << arr[i];
                return 0;
            }
            count++;
        }
    }
}