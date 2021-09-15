/* Write a function that reverses a string. The input string is given as an array of characters s.

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/

// function that can reverse a string 
void reverseString(vector<char>& s) {
        int len = s.size()-1;
        
        vector < char > v;
        
        for(int i=len; i>=0; i--){
        
            v.push_back(s[i]);   
        }
        s = v;
}

