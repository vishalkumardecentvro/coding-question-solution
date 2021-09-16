#include <iostream>
#include <stdio.h>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n, i;
    vector<int> v;
    vector<int> v2(3, 5);
    cin >> n;
    for (i = n; i > 0; i--)
    {
        v.push_back(i);
    }

    // for (int i = 0; i < n; i++)
    //     cout<<v[i];

    

    //swap(v,v2);
    cout<<"v2"<<endl;;
    for (auto element : v2)
    {
        cout << element;
    }
    cout<<"v2 size"<<v2.size();

    sort(v.begin(),v.end());

    cout<<"v1"<<endl;;
    for (auto element : v)
    {
        cout << element;
    }
}