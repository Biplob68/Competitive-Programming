#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}


int max_gcd(int n){

    int GCD = 1;
    for(int i=1; i<n; i++){
        for(int j=i+1; i<=n; j++){
            int val = __gcd(i,j);
            GCD = max(val, GCD);
        }
    }
    return GCD;
}

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;
        cout << n/2 << endl;
    }

    return 0;
}
