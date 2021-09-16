#include <iostream>
#include <stdio.h>
using namespace std;

void InsertionSort(int *array, int size);

int main()
{
    int size;
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    InsertionSort(array, size);
    cout << "sorted array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

void InsertionSort(int *array, int size)
{
    int j, x;
    for (int i = 1; i < size; i++)
    {
        x = array[i];
        j = i - 1;
        while (j > -1 && array[j] > x)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j+1] = x;
    }
}