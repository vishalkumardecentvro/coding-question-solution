#include <stdio.h>
#include <iostream>
void bubbleSort(int *aray, int size);
using namespace std;
int main()
{
    int arraySize, i, j;
    cin >> arraySize;
    int array[arraySize];

    for (i = 0; i < arraySize; i++)
    {
        cin >> array[i];
    }

    bubbleSort(array, arraySize);

    for (i = 0; i < arraySize; i++)
    {
        cout << array[i];
    }
}

void bubbleSort(int *array, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
}