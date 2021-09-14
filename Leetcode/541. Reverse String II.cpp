/* Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.
If there are fewer than k characters left, reverse all of them. 
If there are less than 2k but greater than or equal to k characters, then reverse the first k characters and left the other as original.  

Input: s = "abcdefg", k = 2
Output: "bacdfeg"
*/


string reverseStr(string s, int k) {   
        
        int len = s.size();
        
        for(int i=0; i<len; i+=2*k)
        {
            // If there are fewer than 'k' characters left
            if(s.length()-i<k){
                reverse(s.begin()+i,s.end());
            }
            
            else{
                reverse(s.begin()+i,s.begin()+i+k); 
            }
        }
        
        return s;
}
