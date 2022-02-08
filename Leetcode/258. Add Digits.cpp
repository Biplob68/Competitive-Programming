/* Problem : Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
*/

// Function to find the ans
int addDigits(int num) {
        
        if(num<10) return num;
        int ans;
        
        while(1){
            ans = 0;
            while(num>0){
               ans += num%10;
               num /= 10;
            }
            //cout << ans << endl;
            
            if(ans<10) break;
            else num = ans;
        }
        return ans;
}
