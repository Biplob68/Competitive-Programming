/* 
Problem : Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
*/ 

// function to remove element 
int removeElement(int* nums, int numsSize, int val){
    
    int index = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] != val){
            nums[index++] = nums[i];
        }
    }
    
    return index;

}
