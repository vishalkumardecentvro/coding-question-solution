#include <iostream>
#include <stdio.h>
using namespace std;
void printStair(int *array, int n);
int main()
{
    int size;
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        for(int j=0;j<size-i-1;j++){
            cout<<" ";
        }

        for(int l=size-i-1;l<size;l++){
            cout<<"#";
        }
        cout<<endl;

    }
}