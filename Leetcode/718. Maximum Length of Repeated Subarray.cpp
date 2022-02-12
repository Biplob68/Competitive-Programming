/* Problem: Given two integer arrays nums1 and nums2, return the maximum length of a subarray that appears in both arrays.

Input: nums1 = [1,2,3,2,1], nums2 = [3,2,1,4,7]
Output: 3
Explanation: The repeated subarray with maximum length is [3,2,1].
*/

// Solution: Using dynamic programming ( bootom up approach) 
 int findLength(vector<int>& nums1, vector<int>& nums2) {
        
        int dp[nums1.size()+1][nums2.size()+1];
        
        //if(nums1.size() == 0 || nums2.size()==0) return 0;
        int result = 0;
        
        for(int i=0; i<=nums1.size(); i++){
            for(int j=0; j<=nums2.size(); j++){
                if(i==0 || j==0) dp[i][j] = 0;
                else if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                    result = max(result, dp[i][j]);
                }
                else dp[i][j] = 0;
            }
        }
        
        return result;
 }

// Time Complexity: O(n*m) ----> n = length of first array. m = length of second array
// Space Complexity: O(n*m) 
