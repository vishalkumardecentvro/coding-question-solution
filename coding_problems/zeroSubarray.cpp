#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int t, n, x, y, countZero = 0, countX = 0, countY = 0, maxSubArrayLength = 0, finalZeroCount = 0, finalMaxArraySubLength = 0;
    cin >> t;

    for (int p = 0; p < t; p++)
    {
        cin >> n >> x >> y;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                for (int k = i; k <= j; k++)
                {
                    cout << array[k];
                    if (array[k] == 0)
                    {
                        countZero++;
                    }
                    else if (array[k] == 1 && countX < x)
                    {
                        countZero++;
                        countX++;
                    }
                    else if (countY < y)
                    {
                        countY++;
                        countZero++;
                    }
                    maxSubArrayLength++;
                }
                if ((countZero > finalZeroCount) && (maxSubArrayLength > finalMaxArraySubLength))
                {
                    finalZeroCount = countZero;
                    finalMaxArraySubLength = maxSubArrayLength;
                }
                //cout << "zero= " << countZero << endl;
                //cout << "finalMaxSubArray= " << finalMaxArraySubLength << endl;
                cout << endl;
                countZero = 0;
                countX = 0;
                countY = 0;
                maxSubArrayLength = 0;
            }
        }
        cout << "finalZeroCount" << finalZeroCount << endl;
    }
}