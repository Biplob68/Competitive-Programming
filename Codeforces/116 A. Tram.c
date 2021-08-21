
#include<stdio.h>

int main()
{
    int test, a, b;
    int enter=0, exit=0, current, max=0;

    scanf("%d",&test);

    while(test--)
    {
       // int enter=0, exit=0, current, max=0;
        scanf("%d %d",&a,&b);
        exit += a;
        enter += b;

        current = enter-exit;

        if(current>max) max = current;
    }

    printf("%d\n",max);
    return 0;
}
