/* Problem ; You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected 
and it will automatically contact the police if two adjacent houses were broken into on the same night.

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.
*/

// using Iterative dynamic programming
int rob(vector<int>& nums) {
        
        int size = nums.size();
        
        if(size == 1) return nums[0];
        
        int memo[size+1];
        memo[0] = nums[0];
        memo[1] = max(nums[0],nums[1]);
        
        for(int i=2; i<size; i++){
            
            memo[i] = max(memo[i-1], memo[i-2]+nums[i]);
        }
        
        return memo[size-1];    
}
