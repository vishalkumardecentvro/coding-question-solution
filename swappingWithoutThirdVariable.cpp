#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"reversed numbers"<<endl;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}