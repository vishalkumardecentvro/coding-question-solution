#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define NO_OF_CHAR 256
int main()
{
    string s;
    cin >> s;
    int arr[NO_OF_CHAR] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]]++;
    }

    for (int i = 0; i < NO_OF_CHAR; i++)
    {
        if(arr[i]>1){
            char c = (char)i;
            cout<<c<<" count = "<<arr[i]<<endl;
        }
    }
}