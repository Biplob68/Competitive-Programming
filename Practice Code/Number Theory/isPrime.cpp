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

// all prime from 1 to n
/*
    int Prime[3000];
	Prime[0]=2,Prime[1]=3;
	int p=2;
	for(int i=5;i<=3500;i+=2){
		int j;
		for(j=0; j<p; j++)
			if( i%Prime[j]==0 )
				break;
		if( j>=p )
			Prime[p++]=i;
	}
	for(int i=0; i<30; i++){
        cout << Prime[i] << " ";
	}
*/
