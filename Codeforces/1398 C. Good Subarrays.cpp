#include<bits/stdc++.h>

using namespace std;

int prefix_sum[10000005];


/*
int good_subarray(int size)
{
    int cnt = 0;

    for(int i=1; i<=size; i++)
    {
        for(int j=i; j<=size; j++)
        {
            int pre_sum = prefix_sum[j] - prefix_sum[i-1];
            int len = j-i+1;
            if(pre_sum == len) cnt++;
        }
    }

    return cnt;
}
*/

int main()
{
    int test,n;
    cin >> test;

    while(test--){

        cin >> n;
        string str;
        cin >> str;
        map<long long, long long >mp;
        mp.clear();
        mp[0] = 1;

        for(int i=1; i<=n; i++){
            prefix_sum[i] = prefix_sum[i-1] + str[i-1]-'0';
            mp[prefix_sum[i]-i]++;
        }

        long long  cnt = 0;

        for(auto it=mp.begin(); it!=mp.end(); it++){
            long long a = it->second;
            //cout << a << " ";
            cnt += (a*(a-1))/2;
        }

        cout << cnt << endl;

    }

    return 0;
}
