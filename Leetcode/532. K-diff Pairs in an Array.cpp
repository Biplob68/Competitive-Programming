/* problem: Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.
A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:
0 <= i < j < nums.length
|nums[i] - nums[j]| == k
Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.
*/

// Solution using map
int findPairs(vector<int>& nums, int k) {
     
        //sort(nums.begin(), nums.end());
        int cnt = 0;
        
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        if(k == 0){
            for(auto it: mp){
                if(it.second>1) cnt++;
            }
        }
        else {
            for(auto it: mp){
                if(mp.find(it.first - k) != mp.end()) cnt++;
            }
        }
        
        return cnt;
}
