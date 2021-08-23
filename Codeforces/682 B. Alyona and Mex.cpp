#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, arra[100000];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arra[i];
    }
    sort(arra, arra+n);

    long long x =1;

    for(int i=0; i<n; i++)
    {
        if(arra[i] >= x) x++;
    }

    cout << x << endl;
    return 0;
}
