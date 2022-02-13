/* Problem: Given two strings word1 and word2, return the minimum number of steps required to make word1 and word2 the same.
In one step, you can delete exactly one character in either string.
Input: word1 = "sea", word2 = "eat"
Output: 2
Explanation: You need one step to make "sea" to "ea" and another step to make "eat" to "ea".
*/
// Using dynamic programming( lcs)
int minDistance(string word1, string word2) {
        
        int dp[word1.size()+1][word2.size()+1];
        
        // fill the lookup table in a bottom-up manner
        for(int i=0; i<=word1.size(); i++){
            for(int j=0; j<=word2.size(); j++){
                
                if(i==0 || j==0) dp[i][j] = 0;
                
                 // if the current character of `text1` and `text2` matches
                else if(word1[i-1] == word2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                 // if the current character of `text1` and `text2` don't matches
                else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        // LCS will be last entry of the lookup table
        int lcs = dp[word1.size()][word2.size()];
        return (word1.size() - lcs) + (word2.size() - lcs);
}
    
