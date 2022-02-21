/*Problem: Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.
Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2
*/

// Method 1: Using hash table 
int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int ans, len = nums.size();
        
        for(int i=0; i<len; i++){
            mp[nums[i]]++;
        }
        
        for(auto it: mp){
            if(it.second > len/2) {
                ans = it.first; 
                break;
            }
        }
        return ans; 
}
// Time complexity: O(n)
// Space complexity: O(n)


// Method 2: Using Boyer-Moore Majority Vote Algorithm
int majorityElement(vector<int>& nums) {

        int cnt=1, major = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(cnt == 0) {
                cnt++;
                major = nums[i];
            }
            else if(major == nums[i]) cnt++;
            else cnt--;
        }
        return major;
}

// Time complexity: O(n)
// Space complexity: O(1)
