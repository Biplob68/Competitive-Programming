#include<bits/stdc++.h>
using namespace std;

// Binary search ---> Iterative Method
int binarysearch(int arra[], int size, int x)
{
    int left, right, mid;
    left = 0;
    right = size-1;

    while(left <= right)
    {
        mid = (left + right)/2;

        if(arra[mid] == x) return mid;
        if(arra[mid] < x)  left = mid+1;
        else right = mid-1;
    }
    return -1;

}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int x = 8;
    int result = binarysearch(array, size, x);

    if (result == -1)
        printf("Not found\n");
    else
        printf("Element is found at index %d\n", result);

    return 0;
}


// Average time complexity: O(log n)
// The space complexity of the binary search is O(1)


/*  Binary Search --> Recursive method
int binary_search(int arra[],int num, int left, int right)
{
    if(right>=left)
    {

        int mid = left+(right - left)/2 ;
        if(num == arra[mid]) return mid;

        if(num < arra[mid])
        {
            return binary_search(arra, left, mid-1, num);
        }

        if(num > arra[mid])
        {
            return binary_search(arra, mid+1, right, num);
        }
    }
    return -1;

}
*/
