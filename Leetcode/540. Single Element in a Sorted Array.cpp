/* ###Problem: You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.Your solution must run in O(log n) time and O(1) space.
*/

/* ###Solution: All elements exit in pair. Except one element. Coming to finding that the lone value we are trying to check in which direction it exits. 
So if mid and mid + 1 both elements are equals it means definitely ( I will be standing at even index ) ( taken care by mid % 2 condition )
my lone number lies on right side as left hand side of list are even in nature.*/

int singleNonDuplicate(vector<int>& nums) {
     
        int start = 0, 
        int end = nums.size()-1;
        
        while(start < end){
          
            int mid = start + (end-start)/2;
            
            if(mid%2 == 1) mid--;
            
            if(nums[mid] != nums[mid+1]) end = mid;
            else start = mid + 2;
        }
        
        return nums[start];
}
// Time Complexity: O(logn)
