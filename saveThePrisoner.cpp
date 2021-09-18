#include <iostream>
#include <stdio.h>
using namespace std;

void bubbleSort(int *array, int n);

int main()
{
    int n, m, s, i, t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> n >> m >> s;
        int array[n], count = 0;

        for (int i = 0; i < n; i++)
        {
            array[i] = i + 1;
        }

        cout << "array" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << array[i];
        }
        cout << endl;

        for (i = s - 1; i < n; i++)
        {
            if (count == m-1)
                break;

            
            count += 1;
            cout << "count= " << count << endl;
            cout << "i val= " << i << endl;
            cout << "array val= " << array[i] << endl;
            i = i % (n-1);
        }
        cout << "final i =" << i << endl;
        cout << array[i-1];
    }
}