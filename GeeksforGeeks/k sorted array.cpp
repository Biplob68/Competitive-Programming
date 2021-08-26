/* Given an array of n distinct elements. Check whether the given array is a k sorted array or not. 
A k sorted array is an array where each element is at most k distance away from its target position in the sorted array.
Input: N=6
arr[] = {3, 2, 1, 5, 6, 4} 
K = 2
Output: Yes
*/

#include <bits/stdc++.h>
using namespace std;

// Binary Search function to find out index
int binarySearch(int arr[], int low, int high, int x)
{
     while (low <= high)
     {
        int mid = (low + high) / 2;
        
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else    
            low = mid + 1;    
     }
}


 string isKSortedArray(int arr[], int n, int k)
 {
        int array[n]; 
        
        // Copy arr to array
        for(int i=0; i<n; i++){
            array[i] = arr[i];
        }
        
        //sort array.
        sort(array, array+n);
        
        for(int i=0; i<n; i++){
            
            // index of arr[i] in sorted array 'array'
            int pos = binarySearch(array, 0, n-1, arr[i]);
            
            // if abs(i-j) > k, then that element is not
            // at-most k distance away from its target position.
            if(abs(i - pos) > k){
                return "No";
            }
        
        }
        
        return "Yes";
 }

int main()
{
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    string str = isKSortedArray(arr, n, k);
    if(str == "Yes") printf("Yes\n");
    else printf("No\n");                        
 
    return 0;     
}
