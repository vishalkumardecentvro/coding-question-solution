#include <stdio.h>
#include <iostream>
using namespace std;
void display(int *array,int n);

int main()
{
    int n, l, q, temp, j,lCopy=0;
    cin >> n >> l >> q;
    j = n - 1;
    
    int array[n], queryArray[q];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < q; i++)
    {
        cin >> queryArray[i];
    }

    for (int i = 0; lCopy < l; lCopy++)
    {
        
        temp = array[i];
        array[i] = array[j];
        for (int k = n - 1; k >= 2; k--)
        {
            array[k] = array[k - 1];
        }
        array[i + 1] = temp;

        display(array,n);
    }

    cout << "query" << endl;

    for (int i = 0; i < q; i++)
    {
        cout << array[queryArray[i]];
    }
}

void display(int *array,int n){
    cout<<endl<<"displaying"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
}