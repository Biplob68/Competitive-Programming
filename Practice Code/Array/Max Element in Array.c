#include<stdio.h>
#define MAX 100

int main()
{
    int arra[MAX];

    int n,i;

    scanf("%d",&n);

    printf("Enter the array elements : \n");
    for(i=0; i<n; i++)
    {
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

    printf("Max Element in array : %d\n",max);
    return 0;

}
