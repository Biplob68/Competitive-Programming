#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,i,j,num;

    printf("Enter The Array Size : ");
    scanf("%d",&n);

    int arra[n];
    for(i=0; i<n; i++)
    {
        printf("The %d th Element : ",i+1);
        scanf("%d",&arra[i]);

    }

    printf("The Given Number : \n");
    scanf("%d",&num);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if( (arra[i] + arra[j]) == num){
                printf("Pair : %d %d\n", arra[i], arra[j]);
            }
        }
    }

    return 0;

}
