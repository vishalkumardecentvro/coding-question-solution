#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, k, count = 100, flag = 0;
    cin >> n >> k;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = k; i <= n; i += k)
    {
        if (i > n)
            break;
        if (i == n)
        {
            i = i % (n);
            flag = 1;
        }
        if (array[i] == 1)
        {
            count -= 3;
        }
        else
            count -= 1;

        if (flag == 1)
            break;
    }
    cout<<count;
}