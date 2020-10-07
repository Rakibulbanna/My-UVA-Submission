#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define arr 1000005


ll check[arr], prime[arr];

void sieve() {

    ll n,i,j;

    for(i=4; i<arr; i+=2)

        check[i] = 1;

    for(i=3; i*i<=arr; i+=2){

        if(check[i]==0){

        for(j=i*i; j<arr; j+=(i+i))

                check[j] = 1;
        }
    }

    for(ll m=2; m<arr; m++)
        if(check[m] == 0)

        prime[m]=m;
}

int is_it_prime(int n) {

    int i;

    if(n<=1)
        return 0;

    for(i=2;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main() {

    sieve();

    ll n;

    while(1){
            scanf("%lld",&n);
            if (n==0)break;

    else {


        for(ll x = 3; x < n; x++){

            if(is_it_prime(x)){


                ll y = n - x;


                if(is_it_prime(y)){

                    printf("%lld = %lld + %lld\n", n, x, y);

                    break;
                }
                else {continue;}


            }
        }

    }
    }


    return 0;
}
