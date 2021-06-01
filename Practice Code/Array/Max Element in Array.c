#include<stdio.h>
#define MAX 100

int main()
{
    int arra[MAX];

    int n,i;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter the array elements : \n");
    for(i=0; i<n; i++)
    {
        printf("Enter %d th element : ",i+1);
        scanf("%d",&arra[i]);

    }

    int max = arra[0];

    for(i=1; i<n; i++)
    {
        if(arra[i] > max)
        {
            max = arra[i];
        }
    }

    printf("\nMax Element in array : %d\n",max);
    return 0;

}
