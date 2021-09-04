/*
Problem : Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. 
          The relative order of the elements should be kept the same.
          
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3]         

Input: nums = [0,0,0,1,1,1,1,2,3,3]
Output: 7, nums = [0,0,1,1,2,3,3]

*/


int removeDuplicates(vector<int>& nums) {
        
        int i , size , index = 2;
        
        size = nums.size(); // vector size
        
        if(size <= 2) return size; 
        
        for(i=2; i<size; i++){
           
            // check the current element is equal to previous two element or not
            // If equal then continue the loop 
            if(nums[i] == nums[index-1] && nums[i] == nums[index-2]){
                continue;
            }
            
            nums[index] = nums[i];
            index++;
        }
        return index;
    }
