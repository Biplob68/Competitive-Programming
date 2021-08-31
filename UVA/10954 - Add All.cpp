#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, n1;


    while(scanf("%d", &n), n)
    {
        n1 = n;
        int arra[n], i=0;
        while(n--)
        {
            cin >> arra[i++];
        }

        sort(arra, arra+n1);

        int sum[5005], num = 0, cnt = 0;

        for(i=0; i<n1-1; i++){
            arra[i+1] += arra[i];
            sum[cnt++] = arra[i+1];
        }

        int total_sum = 0;

        for(i=0; i<cnt; i++){
            total_sum += sum[i];
        }

        printf("%d\n", total_sum);
    }

    return 0;
}
