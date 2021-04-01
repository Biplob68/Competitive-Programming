#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    //cin>>N;
    scanf("%d",&N);
    int ara[N];

    ara[0]=1;
    ara[1]=1;

    for(int i=1; i<N; i++)
    {
        ara[i+1] = ara[i]+ara[i-1];
        //printf("%d\n",ara[i]);
    }

    printf("%d\n",ara[N-1]);
    return 0;
}
