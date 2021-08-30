
#include<stdio.h>

int main()
{

    int t,i,j;

    scanf("%d",&t);
    while(t--){
        int n, num[6], cnt=0, ten=1;
        scanf("%d",&n);

        for(i=1; i<6; i++){
            num[i] = n%10;
            n = n/10;

            if(num[i] != 0){ cnt++; }
        }

        printf("%d\n",cnt);

        for(i=1; i<6; i++){

             if(num[i] != 0){
                printf("%d ",num[i]*ten);

             }
             ten=ten*10;
        }

        printf("\n");
    }
    return 0;
}
