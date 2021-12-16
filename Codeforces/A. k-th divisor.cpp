#include<bits/stdc++.h>

using namespace std;

long long kth_divisor(long long n, long long k)
{

    if(n<k) return -1;

    set < long long > divisor;

    long long root = sqrt(n);

    for(long long i=1; i<=root; i++){

        if(n%i == 0){
            divisor.insert(i);
            divisor.insert(n/i);
        }
    }
    int cnt = 1;

    for(auto it=divisor.begin(); it!=divisor.end(); it++){
       // cout << *it << " ";
        if(cnt == k) return (*it);
        cnt++;
    }
    return -1;
}

int main()
{
    long long n, k;

    cin >> n >> k;

    cout << kth_divisor(n,k) << endl;

    return 0;
}
