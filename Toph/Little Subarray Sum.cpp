#include<bits/stdc++.h>

using namespace std;
int main()
{
    int N,i,A,B;
    scanf("%d",&N);

    scanf("%d %d",&A,&B);

    int ara[N], sum=0;


    for(i=0; i<N; i++){
        scanf("%d",&ara[i]);
    }


    for(i=A; i<=B; i++){
        sum = sum + ara[i];

    }
    printf("%d\n",sum);

    return 0;
}
