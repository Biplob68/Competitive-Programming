#include<stdio.h>


int Prime(int N)
{
    int i;

    for(i=2; i<N; i++){
        if(N%i==0){
            return false;
            break;
        }
    }
    return true;

}
int main()
{
    int num;

    scanf("%d",&num);
    if(Prime(num)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;

}
