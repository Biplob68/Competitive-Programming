#include<stdio.h>

void largest(int arra[], int size, int num)
{

    for(int i=1; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arra[i]+arra[j] == num){
                printf("%d + %d = %d\n",arra[i], arra[j], num );
            }
        }

    }

}


int main()
{
    int num, size = 8;
    int arra[] = {1,3,2,4,5,7,8,6};

    printf("Given number : ");
    scanf("%d",&num);

    printf("All pair : \n");
    largest(arra,size, num);

    return 0;
}

