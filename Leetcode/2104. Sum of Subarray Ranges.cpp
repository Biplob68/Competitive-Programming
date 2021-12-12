/* You are given an integer array nums. The range of a subarray of nums is the difference between the largest and smallest element in the subarray.
Return the sum of all subarray ranges of nums.

Input: nums = [1,2,3]
Output: 4
Explanation: The 6 subarrays of nums are the following:
[1], range = largest - smallest = 1 - 1 = 0 
[2], range = 2 - 2 = 0
[3], range = 3 - 3 = 0
[1,2], range = 2 - 1 = 1
[2,3], range = 3 - 2 = 1
[1,2,3], range = 3 - 1 = 2
So the sum of all ranges is 0 + 0 + 0 + 1 + 1 + 2 = 4.
  
*/

long long subArrayRanges(vector<int>& nums) {
        
        long long max, min, sum=0;
        
        for(int i=0; i<nums.size(); i++){
            
            max = min = nums[i];
            
            for(int j=i+1; j<nums.size(); j++){
                
                if(nums[j] > max) max = nums[j];
                if(nums[j] < min) min = nums[j];
                
                sum += max-min;
            }
           
        }
        
        return sum;
}
