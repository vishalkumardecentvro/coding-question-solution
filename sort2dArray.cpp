#include <iostream>
#include <stdio.h>
using namespace std;
void bubbleSort(int *array, int k,int l);


int main()
{
    int n;
    cin >> n;
    int array[n][n];
    int arr[n];
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << "2d array"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j];
        }
        cout<<endl;
    }
    // sort rows
    for(int i=0;i<n;i++){
        bubbleSort(n,(int*)array,i,0);

    }
}

void bubbleSort(int n,int *array,int k,int l)
{
    for (int i = k; i < n - 1; i++)
    {
        for (int j = l; j < n - 1 + i; j++)
        {
            if (array[i][j] > array[i][j+1])
            {
                array[j] = array[j] + array[j + 1];
                array[j + 1] = array[j] - array[j + 1];
                array[j] = array[j] - array[j + 1];
            }
        }
    }
}