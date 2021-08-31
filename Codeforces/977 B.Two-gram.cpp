#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i , j, n, cnt=0, res=0;
    cin >> n;

    string s, ans;
    cin >> s;

    for(i=0; i<n-1; i++){
        int cnt=0;
        for(j=0; j<n-1; j++){
            if(s[i] == s[j] && s[i+1] == s[j+1]){
                cnt++;
            }
        }
        if(cnt > res){
            res = cnt;
            ans = string(1, s[i]) + string(1, s[i+1]);
        }
    }

    cout << ans << endl;

    return 0;
}
