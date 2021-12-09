/* Given an unsorted integer array nums, return the smallest missing positive integer.You must implement an algorithm that runs in O(n) time and uses constant extra space.
Input: nums = [3,4,-1,1]
Output: 2
*/
int firstMissingPositive(vector<int>& nums) {
        
        int i=0, n = nums.size(); 
        
        while(i<n){
            if(nums[i]>0 && nums[i]<=n && nums[nums[i]-1] != nums[i]){
                swap(nums[i], nums[nums[i]-1]);
            }
            else i++;
        }
        
        for(int i=0; i<n; i++){
            if(nums[i] != i+1) return (i+1);
        }
        
        return n+1;
}
