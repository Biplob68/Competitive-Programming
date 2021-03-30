#include<stdio.h>

int main(){
    int num;
    int i, div;

    scanf("%d",&num);

    for(i=num; i>=1; i--)
    {

        if(num%i == 0){
            div = (num/i);
            printf("%d\n",div);
        }
    }
    return 0;
}
