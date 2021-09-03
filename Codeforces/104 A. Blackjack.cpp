#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, ans ;

    cin >> n;

    if(n <=10 || n>=22) ans = 0;
    else
    {
        m = n - 10;
        if(m >= 1 && m <= 9 ) ans = 4;
        if(m == 10) ans = (4*4) - 1;
        if(m == 11) ans = 4;
    }

    printf("%d\n", ans);
    return 0;
}
