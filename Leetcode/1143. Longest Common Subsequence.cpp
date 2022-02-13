/* Problem: Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order 
of the remaining characters. For example, "ace" is a subsequence of "abcde"
Example 1:
Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.
*/

// using dynamic programing ( Bottom up approach )
int longestCommonSubsequence(string text1, string text2) {
        
        int dp[text1.size()+1][text2.size()+1];
        
        // fill the lookup table in a bottom-up manner
        for(int i=0; i<=text1.size(); i++){
            for(int j=0; j<=text2.size(); j++){
                
                if(i==0 || j==0) dp[i][j] = 0;
                
                 // if the current character of `text1` and `text2` matches
                else if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                 // if the current character of `text1` and `text2` don't matches
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        // LCS will be last entry of the lookup table
        return dp[text1.size()][text2.size()];
}
