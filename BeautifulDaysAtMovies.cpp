#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int i, j, k,l,n,reversed=0,remainder,count=0;
    cin >> i>>j>>k;
    for (int l = i; l <= j; l++)
    {
        n=l;
        while(n!=0){
            remainder = n%10;
            reversed = reversed*10 + remainder;
            n = n/10;
        }
        cout<<"reversed= "<<reversed;

        if((l-reversed)%k == 0){
            count++;
        }
        reversed = 0;
        
    }
    cout<<count;
}