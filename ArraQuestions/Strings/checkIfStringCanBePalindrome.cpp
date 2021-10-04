#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#define NO_OF_CHARS 256
int main()
{
    string s;
    cin >> s;
    int arr[NO_OF_CHARS] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]]++;
    }
    int oddCount = 0;

    for (int i = 0; i < NO_OF_CHARS; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }
    cout<<"odd count"<<oddCount<<endl;
    if (oddCount < 2)
    {
        cout << "string can be palindrome";
    }
    else
        cout << "string can not be palindrome";
}