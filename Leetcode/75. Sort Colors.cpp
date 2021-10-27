/* Problem: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, 
white, and blue. We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
*/
void sortColors(vector<int>& nums) {
        int i, temp, low=0, mid=0, high=nums.size()-1;
        
         while(mid<=high){
            if(nums[mid] == 0){
                temp = nums[mid];
                nums[mid++] = nums[low] ;
                nums[low++] = temp;
            }
            else if(nums[mid] == 2){
                temp = nums[mid];
                nums[mid] = nums[high];
                nums[high--] = temp;
            }
            else mid++;
            
        }
}
// Time Complexity : O(log(m+n))
