/* 
Problem : Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
   
*/
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        
        // Fill all non-zero element into array
        // and increade the index number
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[index++] = nums[i];
            }
        }
        
        // All non-zero elements are already at begining of array
        // we need to fill the array with 0
        for(int i=index; i<nums.size(); i++){
            nums[i] = 0;
        }
        
    }
