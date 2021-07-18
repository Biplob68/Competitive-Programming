#include <stdio.h>
int main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;

    printf("\n\nPrint all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&arr1[i]);
    }


    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k+1; j++)
        {
            //Increment the counter when the search value is duplicate.
            if (i!=j)
            {
                if(arr1[i]==arr1[j])
                {
                    ctr++;
                }
            }
        }
        if(ctr==0)
        {
            printf("%d ",arr1[i]);
        }
    }
    printf("\n\n");
    return 0;
}


/*
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count;


    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    //Find frequency of each element
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;

            }

        }
        if(freq[i] != 0)
        freq[i] = count;

    }

    // Print all unique elements of array
    printf("\nUnique elements in the array are: \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
*/
