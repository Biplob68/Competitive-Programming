/* Problem : Given an encoded string, return its decoded string.
Input: s = "3[a]2[bc]"
Output: "aaabcbc"

Input: s = "3[a2[c]]"
Output: "accaccacc"

Input: s = "2[abc]3[cd]ef"
Output: "abcabccdcdcdef"
*/

string decodeString(string s) {
        
        stack<int>nums; // a stack to store number
        stack<string>chars; // a stack to store chars 
        
        int num=0;
        string str;
        
        for(int i=0; i<s.size(); i++){
            
            // If the char is a digit and the number can be more than 1 digit
            if(isdigit(s[i])){
                num = (num*10) + (s[i]-'0');
            }
            
            // If the char is a alphabet then add it into str
            else if(isalpha(s[i])){
                str.push_back(s[i]);
            }
            
            // If the char is '[' then we push string and number into stack
            // Also reset string and number
            else if(s[i]=='['){
                chars.push(str); // put the encoded_string to stack
                nums.push(num);  // put the number into the stack
                str ="";
                num=0;
            }
            
            // When we found ']' our main operation will be started
            // We build the string like 2[bc] -> bcbc 
            else if(s[i]==']'){
                string temp = str;
                for(int j=0; j<nums.top()-1; j++){
                    str += temp;
                }
                str = chars.top() + str;
                chars.pop();
                nums.pop();
            }
        }
        
        return str;
}
