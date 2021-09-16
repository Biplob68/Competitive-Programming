#include<bits/stdc++.h>

using namespace std;

#define M 1000000
bool marked[M];

bool isPrime(int n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    return marked[n] == false;
}

void sieve(int n)
{
    for (int i=3; i*i<= n; i+= 2){
        if (marked[i] == false)   // i is a prime
        {
            for (int j=i*i; j<= n; j+=i+i){

                marked[j] = true;
            }
        }
    }
}

/*
bool isPrime(long long n)
{
    if(n<2) return false;

    for(long long i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
*/

int main()
{
    long long n;

    cin >> n;

    if(isPrime(n)) printf("YEs\n");
    else printf("No\n");
}
