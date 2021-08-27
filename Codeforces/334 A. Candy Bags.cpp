#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, h, m;
    cin >> n;

    k = n*n;
    h = k;
    m = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            printf("%d %d ", m, h);
            h--;
            m++;
        }
        printf("\n");

    }
    return 0;
}
