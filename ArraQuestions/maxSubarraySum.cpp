#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0,finalSum=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
                sum += arr[k];
            }
            if(sum > finalSum){
                finalSum = sum;
            }
            cout << endl;
            sum = 0;
        }
    }

    cout<<finalSum;
}