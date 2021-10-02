/* Problem : Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
Return the leftmost pivot index. If no such index exists, return -1.

1-> Input: nums = [1,7,3,6,5,6]
Output: 3
2-> Input: nums = [1,2,3]
Output: -1
3-> Input: nums = [2,1,-1]
Output: 0
*/

// function to find the pivot index
int pivotIndex(vector<int>& nums) {
        int i, left_sum = 0, right_sum=0;
        
        // sum of all element 
        for(i=0; i<nums.size(); i++){
            right_sum += nums[i];
        }
        
        for(i=0; i<nums.size(); i++){
            
            // decrease the right sum 
            // and compare with left sum 
            right_sum -= nums[i];
            
            if(right_sum == left_sum){
                return i;
            }
            
            left_sum += nums[i];
        }
        
        return -1;
}
