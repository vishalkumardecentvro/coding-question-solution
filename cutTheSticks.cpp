#include <iostream>
#include <stdio.h>
using namespace std;
int findSmallest(int *array, int n);
int main()
{
    int n, temp, count = 0;
    cin >> n;
    int array[n], smallest = array[0];
    int small, flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    temp = n;
    cout << "n value = " << n << endl;
    small = array[0];

    for (int i = 0; i < temp; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (array[i] < small && array[i] != 0)
            {
                small = array[i];
                cout << "smal val = " << small << endl;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (array[j] != 0)
            {
                array[j] -= small;
            }

            if (array[j] == 0)
            {
                count++;
            }
        }
        cout << "count= " << count << endl;

        for (int l = 0; l < n; l++)
        {
            cout << array[l];
        }
    }
}

int findSmallest(int *array, int n)
{
    int small = array[0], flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < small && array[i] != 0)
        {
            small = array[i];
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "i am used" << endl;
        for (int i = 0; i < n; i++)
        {
            if (array[i] > small && array[i] != 0)
            {
                cout << "smallest val = " << small << endl;
                return small;
            }
        }
    }
    return small;
}
