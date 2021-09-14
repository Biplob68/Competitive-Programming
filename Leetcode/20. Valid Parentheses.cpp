/* Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
Input: s = "()[]{}"
Output: true
Input: s = "([)]"
Output: false
*/

// function to check the string is valid or not
bool isValid(string s) {
        
    stack < char > str;
    
    int len = s.length();
    
    for(int i=0; i<len; i++){
        
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            str.push(s[i]);
        }
        
        else if( s[i] == ')' )
        {
            if(str.empty() || str.top() != '(' ){
                str.push(s[i]);
                break;
            }
            str.pop();
        }
        
         else if( s[i] == '}' )
        {
            if(str.empty() || str.top() != '{' ){
                str.push(s[i]);
                break;
            }
            str.pop();
        }
         else if( s[i] == ']' )
        {
            if(str.empty() || str.top() != '[' ){
                str.push(s[i]);
                break;
            }
            str.pop();
        }
        
    }
   // cout << str.size() << endl;
    
    if(str.size() == 0) return true;
    else return false;
  
}
