#include<bits/stdc++.h>

using namespace std;

const int  MAX=100000;

long long prime[MAX];
long long cnt;

void generateprime(long long n){

    prime[0] = 2;
    prime[1] = 3;
    cnt = 2; // total prime number

    long long i,j;
    for(i=5; i<=50; i+=2){
        for(j=0; j<cnt; j++){
            if(i%prime[j]==0) break;
        }
        if(j>=cnt) {
            prime[cnt] = i;
            cnt++;
        }
    }
}

long long smallestdivisor(long long n){

    for(long long i=2; i*i<=n; i++){
        if(n%i == 0) return i;
    }
    return n;
}

int main()
{
    long long n, d;
    cin >> n;

    long long cnt1=0;

    if(n%2 != 0){
        d = smallestdivisor(n);
        n = n-d;
        cnt1++;
    }
    cout << cnt1 + n/2 << endl;

    return 0;
}
