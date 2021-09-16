#include <iostream>
using namespace std;
int main()
{
    int arr1[10], i, req, posn = 5;
    cout << "Enter 5 numbers to store :\t" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;
    cout << "Enter number to find:\t";
    cin >> req;
    cout << endl;
    for (int v = 0; v < 5; v++)
    {
        if (arr1[v] == req)
            posn = v;
    }
    if (posn != 5)
    {
        cout << "number is found at location: " << posn << "\n";
    }
    else
        cout << "Number not found\n";
}