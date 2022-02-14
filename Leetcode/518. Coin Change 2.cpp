/* Problem: You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
*/

// Using dynamic programming
 int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        int dp[n+1][amount+1];
        
        // All first row will be 0
        for(int i=1; i<=amount; i++){
            dp[0][i] = 0;
        }
        
        // All first column will be 1
        for(int i=0; i<=n; i++){
            dp[i][0] = 1;
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=amount; j++){
                // coins should be less than equal to amount
                if(coins[i-1] > j){
                    dp[i][j] = dp[i-1][j];
                }
                else {
                    dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]];
                }
            }
        }
        return dp[n][amount];
 }

// Time & Space Complexity: O(amount*coins.size())
