#include<stdio.h>

int partition(int array[], int low, int high)
{
    int i, j, temp , pivot;

    pivot = array[high];
    i = low-1;

    for(j = low; j<high; j++)
    {
        if(array[j] < pivot)
        {
            // swap element at i with element at j
            i = i+1;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    // swap the pivot element
    temp = array[high];
    array[high] = array[i+1];
    array[i+1] = temp;

    return i+1;   // return the partition point

}

void quick_sort(int array[], int low, int high)
{
    if(low >= high) return ;

    int part = partition(array, low, high); // index for pivot

    quick_sort(array, low, part-1);  // recursive call on the left of pivot
    quick_sort(array, part+1, high);  // recursive call on the right of pivot
}

int main()
{
     int arra[] = {8, 3, 12, 2, 1, 4, 9, 6};

     int n = sizeof(arra) / sizeof(arra[0]);

     quick_sort(arra, 0, n-1);


     printf("The sorted array: ");
     for(int i=0; i<n; i++)
     {
         printf("%d ", arra[i]);
     }
     printf("\n");

     return 0;
}
