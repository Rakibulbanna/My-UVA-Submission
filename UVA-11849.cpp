#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<queue>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

/*
Created by
Rakib ul banna
Department of software engineering
*/


int main (){
    int m,n,i,j;

    while(cin>>n>>m)
    {
        vector<int>vec1;
        vector<int>vec2;


        if(n==0&&m==0)
            {break;}
    else {
        int a,b;
        for(i=0; i<n; i++)
        {
            cin>>a;
            vec1.push_back(a);
        }
        for(j=0; j<m; j++)
        {
            cin>>b;
            vec2.push_back(b);
        }

        vector<int> v(1000008);
        vector<int>::iterator it,is;


is = set_intersection (vec1.begin(), vec1.end(),vec2.begin(),vec2.end(),v.begin());


        int cnt =0;
        for (it = v.begin(); it != is; ++it) {
            cnt++;
        }
        cout << cnt << endl;


    }
    }
    return 0;
}
