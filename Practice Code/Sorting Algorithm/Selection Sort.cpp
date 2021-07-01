#include<stdio.h>


void selection_sort(int arra[], int n)
{
    int i,j,min_index, temp;

    for(i=0; i<n-1; i++)
    {
        min_index = i;
        for(j=i+1; j<n; j++)
        {
            if(arra[j] < arra[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            temp = arra[i];
            arra[i] = arra[min_index];
            arra[min_index] = temp;
        }
    }
}

int  main()
{
    int arra[]= {2,3,9,10,5,7,6,12,4};

    selection_sort(arra, 9);
    for(int i=0; i<9; i++)
    {
        printf("%d ",arra[i]);
    }
    return 0;
}

// Time Complexity: O(n^2) - For best, worst, average case
// Space Complexity : O(1)
