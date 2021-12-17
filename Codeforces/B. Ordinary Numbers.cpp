#include<bits/stdc++.h>

using namespace std;

int findorbitary(int n){

    int cnt = 0;
    for(int pow=1; pow<=n; pow=pow*10+1){
        for(int d=1; d<=9; d++){
            if(pow*d <= n) cnt++;
        }
    }

    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << findorbitary(n) << endl;
    }

    return 0;
}
