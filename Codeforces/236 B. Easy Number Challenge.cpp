#include<bits/stdc++.h>

using namespace std;

long long table[1000001];

long long countDivisor(int n){

    if(!table[n]){
        int divisor = 0;

        for (int i = 1; i * i <= n; i++){

            if (i * i == n) divisor += 1;
            else if (n % i == 0) divisor += 2;
        }
        table[n]=divisor;
        return table[n];
    }
    return table[n];
}


int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    long long result = 0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            for(int k=1; k<=c; k++){
                 result += countDivisor(i*j*k);
                 result %= 1073741824;
            }
        }
    }

    cout << result << endl;
    return 0;
}
