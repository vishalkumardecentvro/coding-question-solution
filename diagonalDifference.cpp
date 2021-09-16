#include <iostream>
#include <stdio.h>
using namespace std;
void leftDiagonalSum(int *array,int n);
int main()
{
    int size,leftDiagonalSum=0,rightDiagonalSum=0;
    cin >> size;
    int array[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> array[i][j];
        }
    }

    for(int i=0;i<size;i++){
        leftDiagonalSum += array[i][i];
    }

    for(int i=0;i<size;i++){
        rightDiagonalSum += array[i][size-1-i];
    }
    cout<<(abs(leftDiagonalSum)-abs(rightDiagonalSum));
    // cout<<"leftDiagonal"<<leftDiagonalSum;
    // cout<<"rightDiagonal"<<rightDiagonalSum;
    
}


