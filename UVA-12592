#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;

/*
Created by
Rakib ul banna
Department of software engineering
*/

int main(){

	string s1,s2;
	
	map <string ,string> map1;
	map <string ,string> :: iterator it;
	int tc,n;

	cin >> tc;
	getchar();
	//cout<<endl;
	for (int i=0;i<tc;i++){
		getline(cin ,s1);
		getline(cin ,s2);
		
		map1[s1] = s2;
	}
	cin >> n;
	getchar();
	//cout<<endl;
	     while(n--){

		getline(cin ,s1);

		for(it = map1.begin();it!=map1.end();it++){

			if(it->first == s1){
                    
				cout << map1[s1]<< endl;
				break;
			}
			else if(it->second == s1){
			    
				cout << s1 << endl;
				break;
			}

		}
	}
	return 0;
}
