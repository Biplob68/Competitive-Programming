#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    scanf("%d",&n);

    string ans, ch;

    for(i=0; i<n; i++)
    {

        cin>>ch;
        ans = ans + ch;

    }


    cout<<ans<<endl;
    return 0;
}
