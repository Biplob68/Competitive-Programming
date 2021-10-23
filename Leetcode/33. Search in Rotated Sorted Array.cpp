/* Problem: Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity.

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
*/

int search(vector<int>& nums, int target) {
        
        int low=0, high=nums.size()-1;
        int mid;
        
        while(low<=high){
            
            mid = (low+high)/2;
            
            if(nums[mid] == target) return mid;
            
            if(nums[low] <= nums[mid]){  
                if(target >= nums[low] && target<nums[mid]) {
                    high = mid-1;
                }
                else low = mid+1;
            }
            else {
                if(target>nums[mid] && target<=nums[high]){
                   low=mid+1;
                }
                else high = mid-1;
            }
        }
        return -1;
}
