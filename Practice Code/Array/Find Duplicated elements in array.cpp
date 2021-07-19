#include<stdio.h>

int main()
{
    int i,j,cnt,n;

    printf("Enter the size of araay :");
    scanf("%d",&n);
    int arra[n];

    printf("Enter the Elements of Array\n");
    for(i=0; i<n; i++)
    {
        printf("%d th Element : ",i+1);
        scanf("%d",&arra[i]);
    }

    printf("Duplicated elements of array : ");
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arra[i] == arra[j] )
            {
                printf("%d ",arra[j]);
                cnt++;
            }
        }
    }
    printf("\nTotal duplicate elements : %d\n",cnt);
    return 0;

}
