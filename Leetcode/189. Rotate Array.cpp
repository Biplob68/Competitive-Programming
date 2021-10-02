/* Problem: Given an array, rotate the array to the right by k steps, where k is non-negative.

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

Input: nums = [1,2], k = 5
Output: [2,1]
*/

// function to rotate an array 
void rotate(vector<int>& nums, int k) {
        vector<int>v;
        int index = nums.size()-k;
        if(k > nums.size()){ 
            index = nums.size() - abs(index)%nums.size(); 
        }
        
        for(int i=index; ; i++){
            // If i greater than array size then start again from zero index
            if(i>=nums.size()) i=0;
            v.push_back(nums[i]);
            // When vector size is equal to array size then terminate the loop
            if(v.size() == nums.size()) break;
        }
        nums = v;
}
