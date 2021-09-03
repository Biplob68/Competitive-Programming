
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