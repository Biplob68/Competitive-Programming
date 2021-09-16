#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) // a>=b
{
    if(b==0) return a;

    else return gcd(b, a%b);
}


int find_lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


int main()
{

    int test, i, n, val, lcm;

    cin >> test;

    while(test--){
        cin >> n;
        int flag =1;

        if(n%2 == 0){
            cout << n/2 << " " << n/2 << endl;
        }

        else{
            for(i=2; i*i<=n; i++){

                if(n%i == 0){
                    cout << n/i<< " " << n-(n/i) << endl;
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) cout << 1 << " " << n-1 << endl;
        }
    }

    return 0;
}
