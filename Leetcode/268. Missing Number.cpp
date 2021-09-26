/* Problem : Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
Input: nums = [3,0,1]
Output: 2
Input: nums = [0,1]
Output: 2
*/

// function to find out the missing value
int missingNumber(vector<int>& nums) {
        
        //sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int sum = n*(n+1) / 2;
        
        for(int i=0; i<nums.size(); i++){
            sum -= nums[i];
        }
        
        return abs(sum);
}

// Time Complexity : O(n)
// Space Complexity : O(1)
