#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, n, a, i, j;

    cin >> test;
    while(test--)
    {
        cin >> n;
        int arra[n];

        for(i=0; i<n; i++)
        {
            cin >> arra[i];
        }

        sort(arra, arra+n);
        int flag = 0;

        for(i=1; i<n; i++)
        {
            int m = arra[i] - arra[i-1];
            if( m > 1)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0 ) cout << "YES" << endl;
        if(flag == 1) cout  <<"NO" << endl;


    }
    return 0;
}
