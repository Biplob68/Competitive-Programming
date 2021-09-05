#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()
{
    int p[31];
    ll sum[31];
    p[0] = 1;
    for(int i = 1; i <= 30; i++)
    {
        p[i] = p[i - 1] * 2;
        sum[i] = sum[i - 1] + p[i];
    }

    int T;
    scanf("%d",&T);
    while(T--)
    {
        int n;
        scanf("%d",&n);
        ll a = p[n],b = 0;
        for(int i = 1; i < n / 2; i++)
        {
            a += p[i];
        }
        for(int i = n / 2; i < n; i++)
        {
            b += p[i];
        }
        printf("%lld\n",a - b);
    }
    return 0;
}
