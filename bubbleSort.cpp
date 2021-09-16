#include <iostream>
#include <stdio.h>
using namespace std;

void BubbleSort(int *array, int size);

int main()
{
    int size;
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    BubbleSort(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

void BubbleSort(int *array, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

    }
}
