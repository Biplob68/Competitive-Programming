/* Problem : Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray.
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2

Input: target = 213, nums = [12,28,83,4,25,26,25,2,25,25,25,12]
Output: 8
*/

int minSubArrayLen(int target, vector<int>& nums) {
        
        int size = nums.size(), ans = INT_MAX;
        
        for(int i=0; i<size; i++){
            int sum = 0;
            for(int j=i; j<size; j++){
                sum += nums[j];  
                // if the sum is greater than target then update the ans
                if(sum >= target){
                    ans = min(ans, j-i+1);
                    break;
                }
            }
            
        }
        
        if(ans != INT_MAX) return ans;
        else return 0;
}
