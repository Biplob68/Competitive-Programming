/* A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Input: s = "A man, a plan, a canal: Panama"
Output: true */


bool isPalindrome(string s) {
        int len = s.size()-1;
        
        //if(len == 0) return true;
        
        for(int i=0; i<len; i++, len--){
           
            while(isalnum(s[i]) == false && i<len) i++;
            while(isalnum(s[len]) == false && i<len) len--;
            
            
            if((char)tolower(s[i]) != (char)tolower(s[len])){
                return false;
            }
        }
        
        return true;
}
