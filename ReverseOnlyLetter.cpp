#include <iostream>
#include <stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;

int main(){
    string s;
    char temp;
    int i,j;
    cin>>s;
    //cout<<s;
    i=0;
    j=s.length()-1;
    
    while(i<j){
        if(!isalpha(s[i])){
            i++;
            continue;
        }

        if(!isalpha(s[j])){
            j--;
            continue;
        }

        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        // cout<<"j val= "<<s[j];
        // cout<<"i val= "<<s[i];

        i++;
        j--;
    }
    cout<<s;

}