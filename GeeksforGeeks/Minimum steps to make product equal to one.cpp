/* 
Given an array arr[] containing N integers. In one step, any element of the array can either be increased or decreased by one.
Find minimum steps required such that the product of the array elements becomes 1. 

Input : N = 3 , arr[] = {-2, 4, 0}
Output : 5        

Explanation:
We can change -2 to -1, 0 to -1 and 4 to 1. So, a total of 5 steps are required to update the elements such that the product of the final array is 1. 

*/ 

int makeProductOne(int arr[], int N) {
  
        int i, positive = 0, negative = 0, zero = 0, step = 0;
        
        for(i=0; i<N; i++)
        {
            if(arr[i] == 0){
                zero++;
            }
            
            if(arr[i] > 0){
                positive++;
                step = step + (arr[i] - 1);
            }
            
            if(arr[i] < 0) {
                negative++;
                step = step + ( - 1 - arr[i]);
            }
        }
  
        // If total negative is even
        if(negative % 2 == 0){
                step = step + zero;
        }
            
            // If total negative number is odd
        else{
            if(zero > 0){
                // One zero have to change -1 
                // and others should be 1
                step = step + zero;
            }
                
            else {
                // If no 0 available we have to 
                // change one -1 to 1
                step = step + 2;
            }
        }
        return step;
    }
