/* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity. 
Input: nums = [5,7,7,8,8,8,10], target = 8
Output: [3,5] */

vector<int> searchRange(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, mid;
        
        vector<int>ans(2,-1); // first store [-1,-1] into vetor
        if(nums.size()==0) return ans; // If empty vector then return[-1,-1]
        
        // find out start position of the target 
        while(left<right){
            mid = left+(right-left)/2;
          
            // If the target is grater than the middle element then search right side
            if(nums[mid] < target) left = mid+1;
            else right = mid; 
        }
        
        if(nums[left] == target) ans[0] = left;
        else return ans;
        
        // No need to set left == 0
        right=nums.size()-1;
        
        while(left<right){
            // Make mid as mid+1
            mid = (left+right)/2 +1;
            if(nums[mid] > target) right = mid-1;
            else left = mid;
        }
        ans[1] = right;
        return ans;
}
