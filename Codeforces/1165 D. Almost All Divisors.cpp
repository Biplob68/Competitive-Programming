#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        set < long long > s1,s2;
        long long mn = INT_MAX;
        long long mx = 1;

        for(int i=0; i<n; i++){
            long long x;
            cin >> x;
            s1.insert(x);
            mx = max(mx, x);
            mn = min(mn, x);
        }

        long long d = mx*mn;



        for(int i=2; i*i<=d; i++){
            if(d%i == 0){
                s2.insert(i);
                s2.insert(d/i);
            }

        }


        if(s1 == s2) cout << d << endl;
        else cout << -1 << endl;
        //v.clear();
        //v1.clear();

    }

    return 0;
}
