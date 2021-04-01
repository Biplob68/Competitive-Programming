#include<stdio.h>

int main()
{
    int i, N;
    scanf("%d",&N);
    int ara[N];

    for(i=0; i<N; i++)
    {
        int num;
        scanf("%d",&num);
        ara[i] = num;

    }

    for(i=0; i<N-1; i++)
    {
        if(ara[i]>ara[i+1])
        {
            printf("No\n");
            return 0;

        }

    }
    printf("Yes\n");

    return 0;
}
