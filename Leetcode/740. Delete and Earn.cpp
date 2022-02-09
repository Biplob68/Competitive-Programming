/* Problem: You are given an integer array nums. You want to maximize the number of points you get by performing the following operation any number of times:
Pick any nums[i] and delete it to earn nums[i] points. Afterwards, you must delete every element equal to nums[i] - 1 and every element equal to nums[i] + 1.
Return the maximum number of points you can earn by applying the above operation some number of times.
Input: nums = [2,2,3,3,3,4]
Output: 9
Explanation: You can perform the following operations:
- Delete a 3 to earn 3 points. All 2's and 4's are also deleted. nums = [3,3].
- Delete a 3 again to earn 3 points. nums = [3].
- Delete a 3 once more to earn 3 points. nums = [].
You earn a total of 9 points.
*/
// Solution using dynamic programming

int deleteAndEarn(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        // store number into map
        for(auto num: nums){
            mp[num] += num;
        }
        
        int dp[10001];
        dp[0] = mp[0];
        dp[1] = mp[1];
        
        for(int i=2; i<mp.size(); i++){
            dp[i] = max(mp[i]+dp[i-2], dp[i-1]);
        }
        
        return dp[mp.size()-1];
}
