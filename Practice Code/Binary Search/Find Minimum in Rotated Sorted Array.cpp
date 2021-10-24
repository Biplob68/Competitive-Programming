int findMin(vector<int>& nums) {

     
        int left=0, right=nums.size()-1, mid;
        
        while(left < right){
            mid = left+(right-left)/2;
            
            // 4,5,6,7,0,1,2 ---> left > right
            if(nums[left]>nums[right]){
                if(nums[mid] >= nums[right]) left = mid+1;
                else right = mid;
            }
            
            // 11,13,15,17 ---> left < right
            else {
                if(nums[mid]>=nums[left]) right = mid-1;
                else left = mid;
            }
        }
        return nums[left];
}
