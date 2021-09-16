#include <iostream>
#include <stdio.h>
using namespace std;
void findBirdCount(int *array, int n);
int hashArray[6] = {0, 0, 0, 0, 0,0};

int main()
{
    int n, i;
    cin >> n;
    int array[n];

    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    findBirdCount(array, n);
}

void findBirdCount(int *array, int size)
{
    int i, max, maxIndex = 0;
    for (i = 0; i < size; i++)
    {
        hashArray[array[i]] += 1;
    }
    for (i = 0; i < 6; i++)
    {
        cout<<hashArray[i];
    }
    
     max = hashArray[maxIndex];

    for (i = 0; i < 6; i++)
    {
        //cout<<hashArray[i];
        if (hashArray[i] > max)
        {
            max = hashArray[i];
            maxIndex = i;
        }
        if (hashArray[i] == max)
        {
            if (i < maxIndex)
            {
                max = hashArray[i];
                maxIndex = i;
            }
        }
    }

    cout << maxIndex;
}