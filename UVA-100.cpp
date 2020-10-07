#include <bits/stdc++.h>
#include<string.h>
#include<string>
#include<iostream>
#include <vector>
#include <list>
#include<stdio.h>
#include <numeric>
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
using namespace std;

typedef long long ll;

ll count_fun(ll i,ll j){

    ll cnt=0, m, n, maxi=-1;
        m=i; n=j;
        if(i>j){
            swap(i, j);
        }
        for(int k=i; k<=j; k++){
                ll z=k;

            while(z!=1){

                if(z%2==0){z/=2;}
                else{z=(3*z)+1;}
                cnt++;
            }
            maxi=max(maxi,cnt);
            cnt=0;
        }
      return maxi+1;

}



int main(){
    #ifndef ONLINE_JUDGE
       clock_t tStart = clock();
        //freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

       ll i,j;
       while (scanf("%lld%lld",&i,&j)!=EOF){

        cout <<i<<' '<<j<<' '<<count_fun(i,j)<<endl;
       }


    #ifndef ONLINE_JUDGE
    //printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
    #endif
}
