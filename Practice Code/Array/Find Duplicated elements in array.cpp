#include<stdio.h>

int main()
{
    int i,j,cnt;
    int arra[10];

    printf("Enter the Elements of Array\n");
    for(i=0; i<5; i++)
    {
        printf("%d th Element : ",i+1);
        scanf("%d",&arra[i]);
    }

    printf("Duplicated elements of array : ");
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arra[i] == arra[j])
            {
                printf("%d ",arra[j]);
                cnt++;
            }
        }
    }
    printf("\nTotal duplicate elements : %d\n",cnt);
    return 0;

}
