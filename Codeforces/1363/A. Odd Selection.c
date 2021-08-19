#include<stdio.h>

int main()
{
    int test;

    scanf("%d",&test);

    while(test--)
    {
        int n,i,x,a,even=0, odd=0;

        scanf("%d %d",&n,&x);

        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a%2==0)
                even++;
            else
                odd++;
        }
        if(odd==0||(even==0&& x%2==0)||(n==x && odd%2==0))
        {
            printf("No\n");
        }

        else
            printf("Yes\n");
    }
    return 0;
}
