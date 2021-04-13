#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    int ans1 = x/y;
    int ans2 = x%y;
    printf("%d %d %d\n",ans1,ans2,y);
    return 0;

}
