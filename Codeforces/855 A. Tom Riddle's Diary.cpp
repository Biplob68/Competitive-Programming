#include<bits/stdc++.h>

using namespace std;

int main()
{
    map <string , int> m;
    map <string , int> ::iterator it;

    int n;
    string s;

    cin >> n;

    while(n--){
        cin >> s;
        m[s] += 1;

        if(m[s] <=1 ) printf("NO\n");

        else if(m[s] > 1) printf("YES\n");
    }

    return 0;
}
