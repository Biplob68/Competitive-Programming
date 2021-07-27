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


/*
#include<bits/stdc++.h>
using namespace std;

// Function to find a pair in an array with a given sum using sorting
void findPair(int arr[], int n, int sum)
{
    // sort the array in ascending order
    sort(arr, arr + n);

    // maintain two pointing to endpoints of the array
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == sum)
        {
            printf("Pair found %d , %d\n",arr[low], arr[high]);
            return;
        }
        // increment `low` index if the total is less than the desired sum;
        // decrement `high` index if the total is more than the desired sum
        if (arr[low] + arr[high] > sum) high--;

        else low++;
    }
    // If the pair is not found
    printf("Pair is not found!\n");
}

int main()
{
    int arr[] = { 8, 7, 2, 5, 3, 1 };
    int sum =8;

    int n = sizeof(arr)/sizeof(arr[0]);

    findPair(arr, n, sum);

    return 0;
}
Complexity -> nlog(n) - for quicksort
*/
