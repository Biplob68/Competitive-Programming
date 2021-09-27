/* Problem : Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Input: nums = [4,1,2,1,2]
Output: 4
*/

// Function to find out the unique number that appears only one 
int singleNumber(vector<int>& nums) {
        
        int res = 0;
        
        for(int i=0; i<nums.size(); i++){
            
            // bitwise XOR operation to find unique number
            res = nums[i]^res;
        }
        
        return res;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
