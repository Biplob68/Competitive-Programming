#include<stdio.h>


// Divided the array into two sub-array and merge them
void merge_sort(int array[], int left, int right)
{
    if(left>=right)
    {
        return;
    }
    int mid = left + (right - left) / 2;

    merge_sort(array, left, mid);
    merge_sort(array, mid+1, right);

    // Merge the two array

    merge(array, left, mid, right);
}


// Merge two sub-arrays L and R into main array
void merge(int array[], int left, int mid, int right)
{
    int i,j, left_size, right_size;

    left_size = mid-left+1;
    right_size = right-mid;

    int L[left_size], R[right_size];

    // Copy element from array[left] to array[mid] into L array
    for(i=0; i<left_size; i++)
    {
        L[i] = array[left + i];
    }

    // Copy element from array[mid+1] to array[right] into R array
    for(i=0; i<right_size; i++)
    {
        R[i] = array[mid+1+i];
    }

    int a;
    i = 0;
    j = 0;

    // Until reach either end of either L or M, pick small among
    // elements L and R and place them in the correct position at Array[]
    for(a= left; i<left_size && j<right_size; a++)
    {
        if(L[i] <= R[j])
        {
            array[a] = L[i];
            i++;
        }

        else
        {
            array[a] = R[j];
            j++;
        }
    }

  // Pick up the remaining elements of L & R and put in Array[]
    while(i<left_size){
        array[a] = L[i];
        i++;
        a++;
    }

    while(j<right_size){
        array[a] = R[j];
        j++;
        a++;
    }
}


int main()
{
    int i, n = 9;
    int array [] = {2,4,1,5,7,8,16,18,3};

    merge_sort(array, 0, n-1);

    printf("The sorted array! \n");
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


// Time Complexity - O(nlog(n)) - For best, average, worst case. --> Total n operation for every step and total step log2(n) 
// Space complexity - O(n) - Require equal amount of additional space.
