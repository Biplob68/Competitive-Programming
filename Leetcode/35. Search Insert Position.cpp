/* Problem: Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index 
where it would be if it were inserted in order.You must write an algorithm with O(log n) runtime complexity.
Input: nums = [1,3,5,6], target = 2
Output: 1
Input: nums = [1,3,5,6], target = 7
Output: 4
*/

int searchInsert(vector<int>& nums, int target) {
        
        int low=0, high=nums.size()-1;
        
        if(target<nums[low]) return 0;
        if(target>nums[high]) return (high+1);
        
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[mid] < target) low=mid+1;
            else high = mid-1;
        }
        return low;
}
