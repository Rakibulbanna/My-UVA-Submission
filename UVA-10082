#include<string>
#include<stdio.h>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Created by
Rakib ul banna
Department of software engineering
*/

int main(){
    string s1="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string s2;
    while(getline(cin,s2))
    {
        for(int i=0;i<s2.size();i++)
        {
            for(int j=0;j<s1.size();j++)
            {
                if(s2[i]==s1[j])
                    s2[i]=s1[j-1];
            }
        }
        cout<<s2<<endl;
    }
    return 0;
}
