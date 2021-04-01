/*#include <stdio.h>

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
*/

#include <stdio.h>

int main()
{
   int i,j,spc,rows,k;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              printf(" ");
            }

	   for(j=1;j<=i;j++)
	   printf("* ");
	printf("\n");
    spc--;
   }
   return 0;
}
