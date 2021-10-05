/* Problem: Given an input string s, reverse the order of the words. Return a string of the words in reverse order concatenated by a single space.
Input: s = "  hello world  "
Output: "world hello"
Input: s = "  Bob    Loves  Alice   "
Output: "Alice Loves Bob"
*/

// Function to reverse a word : hello --> olleh
void reverse_word(string& s, int l ,int r){
        
        while(l<r){
            char temp = s[l];
            s[l++] = s[r];
            s[r--] = temp;
        }    
}

// function to reverse word in a string
string reverseWords(string s) {
        
        int  start=0, i=0, j=0, len = s.length();
        int cnt = 0;
        
        while(true){
            // skip space in fornt of the word
            while(i < len && s[i] == ' ') i++; 
            if(i == len) break;
            
            if(cnt) s[j++] = ' ';
            start = j;
            
            while(i<len && s[i] != ' '){
                s[j] = s[i];
                j++; i++;
            }
            // reverse word in place 
            reverse_word(s, start, j-1);
            cnt++;
        }
        
        s.resize(j); // resize the string 
        reverse_word(s, 0, j-1); // reverse full string 
        
        return s;
}
