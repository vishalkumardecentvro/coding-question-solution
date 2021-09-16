#include <iostream>
#include <stdio.h>
using namespace std;

void bubbleSort(int *array,int n);

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    bubbleSort(array,n);
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
}

void bubbleSort(int *array,int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}