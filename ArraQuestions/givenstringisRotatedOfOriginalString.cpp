#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
#define NO_OF_CHAR 256
int main()
{
    string s, s1;
    cin >> s >> s1;
    string temp = s + s;
    int findPosn = temp.find(s1);
    if (findPosn != string::npos)
    {
        cout << "String is rotated"<<endl;
        cout << temp << " " << findPosn;
    }
    else
    {
        cout << "String is not rotated"<<endl;
        cout << temp << " " << findPosn;
    }
}