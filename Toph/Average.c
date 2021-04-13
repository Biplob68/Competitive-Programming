#include<stdio.h>
int main()
{
    int test,i;
    double sum=0;

    scanf("%d",&test);

    for(i=1; i<=test; i++)
    {
        int a;
        double ans;
        scanf("%d",&a);
        sum = sum+a;
        ans = (sum/i);
        printf("%0.10f\n",ans);
    }
    return 0;
}
