#include <stdio.h>
#include <iostream>
using namespace std;
void bubbleSort(int *array, int n);

int main()
{
    int n, i, j;
    cin >> n;
    int array[n];

    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    bubbleSort(array, n);

    for (i = 0; i < n; i++)
    {
        cout << array[i];
    }
}

void bubbleSort(int *array, int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}