/* Problem : Given an integer array nums of length n where all the integers of nums are in the range [1, n] and 
each integer appears once or twice, return an array of all the integers that appears twice.
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Input: nums = [1]
Output: []
*/

// Function to find out duplicated element with hash map
vector<int> findDuplicates(vector<int>& nums) {
  
        vector<int> v;
        unordered_map<int,int>m;
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto it=m.begin(); it!=m.end(); it++){
            
            if(it->second > 1) {
                v.push_back(it->first);
            }
           
        }
        
        return v;
}

// Time Complexity : O(n)
