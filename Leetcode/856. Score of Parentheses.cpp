/* Given a balanced parentheses string s, return the score of the string.

The score of a balanced parentheses string is based on the following rule:

"()" has score 1.
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
 

Example 1:

Input: s = "()"
Output: 1
Example 2:

Input: s = "(())"
Output: 2 
*/

// Solution 1: Using stack
int scoreOfParentheses(string s) {
        
        stack <int> stk;
        int score = 0;
        
        for(int i=0; i<s.size(); ++i){
           if(s[i] == '(') {
               stk.push(score);
               score = 0;
           }
           else {
                score += stk.top() + max(score,1);
                stk.pop();
            }
        }
        return score;
}


// solution 2:
int scoreOfParentheses(string s) {
        
        int cnt=0, score = 0;
        
        for(int i=0; i<s.size(); ++i){
           if(s[i] == '(') cnt++;
            
            else {
                cnt--;
                if(s[i-1] == '('){
                    // 1 << cnt --> basically pow(2,cnt);
                    score += (1 << cnt);
                }
            }
        }
        return score;
}
