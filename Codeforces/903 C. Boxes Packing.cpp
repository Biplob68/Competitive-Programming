#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, x;
    map < int ,int > mp;

    scanf("%d", &n);

    int cnt = 0;

    for(i=0; i<n; i++){

        scanf("%d", &x);
        mp[x] ++;
        //cout << mp[x] << endl;

        if(mp[x] > cnt) cnt = mp[x];
        //cout << cnt << endl;

    }

    printf("%d\n", cnt);

    return 0;
}
