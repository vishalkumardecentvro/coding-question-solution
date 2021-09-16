#include <iostream>
#include <stdio.h>
using namespace std;

void bubbleSort(int *array,int n);

int main()
{
    int n,shared,liked,count=0;
    cin >> n;
    shared = n;

    for(int i=0;i<n;i++){
        liked = shared/2;
        count += liked;
        shared = (shared/2)*3;
        cout<<"liked"<<liked<<endl;
        cout<<"count"<<count<<endl;
        cout<<"shared"<<shared<<endl;
    }
    cout<<count;
    

}