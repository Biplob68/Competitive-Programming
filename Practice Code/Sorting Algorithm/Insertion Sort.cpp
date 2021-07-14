#include<stdio.h>


void insertion_sort(int arra[], int n)
{
    int i, j, item;

    for(i=1; i<n; i++)
    {
        item = arra[i];
        j = i-1;
        while(j>=0 && arra[j] > item)
        {
            arra[j+1] = arra[j];
            j--;
        }
        arra[j+1] = item;
    }
}
int  main()
{
    int arra[]= {2,3,9,10,5,7,6,12,4};

    insertion_sort(arra, 9);
    for(int i=0; i<9; i++)
    {
        printf("%d ",arra[i]);
    }
    return 0;
}

// Time complexity : O(n^2) - Average & Worst case,  O(n) - Best Case when the list is already sorted.

