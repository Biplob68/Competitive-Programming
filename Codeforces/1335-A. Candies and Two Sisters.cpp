
#include<stdio.h>
int main()

{
    int i,t,ans;
    long int n;
    scanf("%d",&t);

    for(i=0; i<t; i++){
        scanf("%ld",&n);

        if(n%2 == 0){
            ans = (n/2)-1;
        }
        else {
            ans = n/2;
        }
        printf("%d\n",ans);
    }

    return 0;
}
