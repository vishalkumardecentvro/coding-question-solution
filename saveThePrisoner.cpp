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
        int array[n],count = 1;

        for (int i = 0; i < n; i++)
        {
            array[i] = i + 1;
        }

        cout<<"array"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<array[i] ;
        }

        for (i = s-1; count < m; i++)
        {
            if (i == n-1 )
            {
                i = 0;
            }
            count++;
            cout << "count= " << count << endl;
            cout << "i val= " << i << endl;
        }
        cout << "final i =" << i<<endl;
        cout << array[i];
    }
}