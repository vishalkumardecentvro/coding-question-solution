#include <iostream>
#include <stdio.h>
using namespace std;
void findPairs(int *array,int n,int k);

int main()
{
    int n, k, i;
    cin >> n >> k;
    int array[n];

    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    findPairs(array,n,k);
}

void findPairs(int *array, int size, int k)
{
    int i, j, sum, count = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum = array[i] + array[j];
            if (sum % k == 0 && i != j && i<j)
            {
                count++;
                cout<<"Pair\n";
                cout<<array[i]<<array[j];
            }
            sum = 0;
        }
    }

    cout << "count= "<<count;
}