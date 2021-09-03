/* Problem : Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
            The relative order of the elements should be kept the same.
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]

Time Complexity : 0(n)
Space Complexity : 0(1)
*/

int removeDuplicates(vector<int>& nums) {
        int len, index=0;
        
        len = nums.size();
        if(len ==0 ) return 0;
        
        for(int i=1; i<len; i++){
            
            // check the element is duplicated or not 
            // if not then push into vector
            if(nums[i] != nums[index]){
                index++;
                nums[index] = nums[i];
            }
        }
        
        return index+1;
}
