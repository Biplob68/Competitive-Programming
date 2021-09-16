#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n, i,j, cnt = 0;

    cin >> n;

    long long arra[10000]={0};

    for(i=2; i<=n; i++){
        if(arra[i] == 0){
            for(j=i; j<=n; j+=i){
                arra[j]++;
            }
        }

        if(arra[i] == 2) cnt++;
    }

    cout << cnt << endl;
}
