#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <string>

using namespace std;

/*
Created by
Rakib ul banna
Department of software engineering
*/

int main(){
    string s1,temp;
    set<string> set1;
    char ss;

    while (getline(cin,s1)){   //c++ EOF input method


         temp="";  /*It can be made empty, by assigning an empty
                        string to it (s = "" or s = std::string())
                       or by clearing it (s.clear())*/

        for (int i = 0; i < s1.size(); i++)
        {
            ss = tolower(s1[i]);

            if (ss >= 'a' && ss <= 'z'){

                temp += ss;


            }


            else if (temp != "") {
               set1.insert (temp);
                temp = "";
                }
            }
            if (temp != ""){
               set1.insert (temp);
                temp = "";
            }

        }


    set<string>::iterator it;

    for ( it = set1.begin(); it != set1.end(); it++){

        cout << *it << endl;
    }

}
