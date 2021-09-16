#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, page, rowSize, i, j, count = 0;
    cin >> n >> page;
    rowSize = (n / 2) + 1;
    //cout << "rowSize= " << rowSize;
    int array[rowSize][2];

    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < 2; j++)
        {
            array[i][j] = count;
            count++;
        }
    }

    // cout << "array values";

    // for (i = 0; i < rowSize; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         cout << array[i][j];
    //     }
    // }


    int topSearchIndex;

    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (array[i][j] == page)
            {
                topSearchIndex = i;
                break;
            }
        }
    }

    //cout << "top index=> " << topSearchIndex;

    int downSearchIndex = 0;

    for (i = rowSize - 1; i >= 0; i--)
    {
        for (j = 0; j <2; j++)
        {
            if (array[i][j] == page)
            {
                downSearchIndex = i;
                break;
            }
        }
    }

    downSearchIndex = (rowSize-1) - downSearchIndex;

    topSearchIndex<downSearchIndex?cout<<topSearchIndex:cout<<downSearchIndex;


}
