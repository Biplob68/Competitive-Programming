#include<bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,k,T, t, n, ans;

    cin>>T;

    while(T--)
    {
        cin>>t;
        int a[t];

        for(i=0; i<t; i++){
            cin >>a[i];
        }

        sort(a, a + t );
        ans =0;

        for(i=1; i<t; i++)
        {
            int m = (a[i]-a[i-1]);
            if( m>1 ){
                ans =1;
                break;
            }

        }
        if(ans ==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

