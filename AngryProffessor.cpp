#include <stdio.h>
#include <iostream>
using namespace std;
void findOnTimeStudents(int *array, int n, int k);

int main()
{
    int t, n, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int array[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        findOnTimeStudents(array, n, k);
    }
}

void findOnTimeStudents(int *array, int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0 || array[i] < 0)
            count++;
    }

    if (count == k || count > k)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}