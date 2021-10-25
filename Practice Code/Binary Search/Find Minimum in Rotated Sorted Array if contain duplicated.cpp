int findMin(vector<int>& nums) {
        
        int low = 0, high = nums.size()-1, mid=0;
        
        while(low<high){
            mid = low + (high-low)/2;
            
            if(nums[mid] > nums[high]) low = mid+1;
            else if(nums[mid] < nums[high]) high = mid;
            // When the minimum number found
            else {
                if(nums[high-1] > nums[high]){
                    low = high;
                    break;
                }
                else high--;
                
            }
        }
        
        return nums[low];
}
