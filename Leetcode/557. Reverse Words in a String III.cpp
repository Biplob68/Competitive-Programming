/* Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
*/

// function that can reverse the order of characters in each word within a sentence
string reverseWords(string s) {
        
        int len = s.size();
        int k = 0;
        
        for(int i=0; i<len; i++){
            
            // if we got a space then we reverse the word
            // also update the value of k by i+1
            if(s[i] == ' '){
                
                reverse(s.begin()+k, s.begin()+i);
                k = i+1;
                
            }
        }
        // reverse the last word 
        reverse(s.begin()+k, s.end()) ;              
        return s;                
}
