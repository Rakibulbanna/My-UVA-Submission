#include<bits/stdc++.h>
#include <cstdio>
#include <stack>
#include <cstring>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
    //fflush(stdin);
    cin.ignore();

	while (n--) {
		stack<char> stack1;
		string s1;
		int i;
        getline(cin,s1);


		for (i=0;i<s1.length();i++) {

			  if ( !stack1.empty() && stack1.top()=='(' && s1[i] == ')') {

				stack1.pop();
				}

			 else if ( !stack1.empty() && stack1.top()=='[' && s1[i] == ']') {

				stack1.pop();
			}
			else {
                stack1.push(s1[i]);
			}
		}

		if(stack1.empty()){
                printf("Yes\n");
        }
		else {
                printf("No\n");
        }
	}

	return 0;
}
