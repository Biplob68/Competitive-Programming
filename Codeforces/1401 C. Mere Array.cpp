#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int a[n],b[n];
        int min_val = 1000000000;
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
            min_val = min(min_val,a[i]);
        }

        sort(b, b+n);

        int flag = 0;

        for(int i=0; i<n; i++){
            if(a[i] != b[i] && a[i]%min_val > 0) flag = 1;
        }

        if(flag==1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
