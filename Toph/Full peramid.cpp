#include <stdio.h>

int main()
{
    int col,row,N;
    scanf("%d",&N);
    for(row=1; row<=N; row++)//row number
    {
        for(col=1; col<=N-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
