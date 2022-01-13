/* Problem : Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/
vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size(), 1);
        
        for(int i=1; i<nums.size(); i++){
            ans[i] = ans[i-1] * nums[i-1];
            //cout << ans[i] << " ";
        }
        int n = nums.size(), suffix = 1;
        
        for(int i=n-1; i>=0; i--){
            ans[i] = suffix*ans[i];
            suffix = suffix*nums[i];
        }
        return ans;
}

// Complexity: O(n)
