#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int main()
{
    // int a = 5;
    // int b = 6;
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // cout<<"a value = "<<a <<endl<<"b value = "<<b;

    // int count = 0;
    // string myString = "aaaab"; //aabaa // aaab
    // //cout<<myString.length();
    // for (int i = 0; i < myString.length(); i++)
    // {
    //     cout << myString[i];
    //     if (myString[i] == 'a')
    //         count++;
    // }

    int arr[] = {11,7,11};
    int highest = arr[0],highestIndex;

    
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
            highestIndex = i;
        }
    }
    arr[highestIndex] = 0;
    highest = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
            highestIndex = i;
        }
    }
    cout<<highest;
}
/*
onAttach()
onCreate()
onViewCreate()
onViewCreated()
onStart()
onResume()
onPause()
onStop()
onDestroyView()
onDestroy()*/