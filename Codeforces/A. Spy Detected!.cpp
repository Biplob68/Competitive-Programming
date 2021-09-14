#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;

    cin >> test;

    while(test--){
        int i, a, n;
        cin >> n;
        vector < int > v, v1;

        for(i=0; i<n; i++){
            cin >> a;
            v.push_back(a);
        }
        v1 = v;

        sort(v1.begin(), v1.end());

        for(i=0; i<n; i++){
            if(v[i] != v1[1]){
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}
