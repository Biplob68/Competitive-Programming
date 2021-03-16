#include<stdio.h>


int remove_zero(int n)
{
    int temp=1, a=n, res=0,t;
    while(a)
    {
        t = a%10;
        if(t){
            res += temp*t;
            temp = temp*10;
        }
        a = a/10;
    }
    return res;
}

int main()
{
    int x,y;
    while(scanf("%d %d", &x,&y) !=EOF){
        if(remove_zero(x+y) == remove_zero(x)+ remove_zero(y)){
            printf("YES\n");
        }

        else{
            printf("NO\n");
        }
    }

    return 0;

}
