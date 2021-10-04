#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int arr[n], brr[p];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < p; i++)
    {
        cin >> brr[i];
    }
    int a, b;
    a = arr[0];
    b = brr[p - 1];
    int i = 0, j = 0;
    while (i < n && j < p)
    {
        if (arr[i] < brr[j])
            cout << arr[i++];

        else if (arr[i] > brr[j])
            cout << brr[j++];

        else if (arr[i] == brr[j])
        {
            cout << brr[j++];
            i++;
        }
    }
    while (i<n)
    {
        cout<<arr[i++];
    }
    while (j<p)
    {
        cout<<arr[j++];
    }
    
}