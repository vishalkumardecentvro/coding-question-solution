#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int *A,int i,int j){
    int temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

int partition(int *A, int low, int high)
{
    int i=low, pivot = A[low],j=high;
    do
    {
        do{i++;} while (A[i] <= pivot);
        do{j++;} while (A[j] >= pivot);
        if(i<j)
        swap(A,i,j);
    } while (i<j);
    return j;
}

void QuickSort(int *A,int low,int high){
    int j;
    if(low<high){
        j=partition(A,low,high);
        QuickSort(A,low,j);
        QuickSort(A,j+1,high);

    }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;

    QuickSort(A,0,n);

    for (i = 0; i < n; i++)
    {
        cout << i;
    }
    return 0;
}