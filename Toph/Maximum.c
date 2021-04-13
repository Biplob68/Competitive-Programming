#include<stdio.h>

int main()
{
    int i, test,max=0;
    scanf("%d",&test);

    for(i=0; i<test; i++)
    {
        int a;
        scanf("%d",&a);
        if(a > max){
            max=a;
        }
    }
    printf("%d\n",max);
    return 0;
}
