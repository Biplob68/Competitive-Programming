/* Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is the smallest in lexicographical order among all possible results.

Example 1:
Input: s = "bcabc"
Output: "abc"

Example 2:
Input: s = "cbacdcbc"
Output: "acdb"
*/
string removeDuplicateLetters(string s) {
        string str="";
        
        bool visit[26] = {};
        int last_pos[26] = {};
        
        // store last position of every character
        for(int i=0; i<s.size(); i++){
            last_pos[s[i] - 'a'] = i; 
        }
        
        for(int i=0; i<s.size(); i++){
            if(visit[s[i]-'a']) continue;
            
            // If the last char of the str is greater than the current char of s 
            // And position is greater than the current char
            // Then remove the last char from str and make visit equal false
            while(!str.empty() && str.back() > s[i] && last_pos[str.back()-'a'] >i){
                visit[str.back()-'a'] = false;
                str.pop_back();
            }
            str.push_back(s[i]);
            visit[s[i]-'a'] = true;
            
        }
        return str;
        
 }
