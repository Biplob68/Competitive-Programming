#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt=0;

    cin >> n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int max=a[0];
    int min=a[0];

    for(i=0; i<n; i++)
    {

        if(a[i]>max)
        {
            max=a[i];
            cnt++;
        }

        if(a[i]<min)
        {
            min=a[i];
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
