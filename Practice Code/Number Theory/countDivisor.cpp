#include<bits/stdc++.h>

using namespace std;

// function to count divisor
int countDivisor(int n)
{
    int divisor = 0;
    for (int i = 1; i * i <= n; i++){

        if (i*i == n){
            divisor += 1;
            //cout << i << " ";
        }
        else if (n%i == 0){
            divisor += 2;
            //cout << i << " " << n/i << " ";
        }
    }
    return divisor;
}


int main()
{
    int n;

    cin >> n;


    int cnt = countDivisor(n);

    cout << cnt << endl;

}
