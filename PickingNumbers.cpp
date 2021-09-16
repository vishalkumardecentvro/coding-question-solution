#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, temp, count = 0, tempCount = 0, lowFlag = 0, highFlag = 0;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "sorted array";

    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(array[i] - array[j]) == 0 || abs(array[i] - array[j]) == 1)
            {
                if (array[j] <= array[i])
                {
                    if(highFlag == 1)
                    
                    lowFlag = 1;
                }
                else
                    highFlag = 1;
                tempCount++;
                cout << endl
                     << array[i] << array[j];
            }
            else
            {
                continue;
            }
        }
        if (tempCount > count)
            count = tempCount;
        tempCount = 0;
    }

    cout << endl
         << "count= " << count;
}