#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, m, a, b;
    int cnt = 0;

    cin >> n >> m;

    for(a=0; a*a<=n; a++){
        b = n - pow(a,2);
        if(a+pow(b,2) == m){
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
