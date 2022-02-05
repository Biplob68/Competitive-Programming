/* Problem : Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1. */

// Solution: using hash map and prefix sum
int findMaxLength(vector<int>& nums) {
        
        unordered_map<int,int> map;
        map[0] = -1; // set value 0 to -1
        int sum =0, long_subarray = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) sum += -1;
            else sum += 1;
            
            if(map.find(sum) != map.end()){
                if(long_subarray < i-map[sum]){
                    long_subarray = i-map[sum];
                }
            }
            else {
                map[sum] = i;
            }
        }
        
        return long_subarray;
}
// Time complexity: O(n)
