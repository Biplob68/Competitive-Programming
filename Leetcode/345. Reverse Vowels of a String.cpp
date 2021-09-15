/*  Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases. 

Input: s = "leetcode"
Output: "leotcede"
*/

// function to check a char is vowel or not
bool isVowel(char a) {
        if(a=='a'||a=='A' || a=='e' || a=='E') return true;
        if(a=='i'||a=='I' || a=='o' || a=='O') return true;
        if(a=='u'||a=='U') return true;
        
        return false;
}    

string reverseVowels(string s) {
        
        int start = 0, end = s.size()-1;
        
        while(start<end){
          
            // if two vowel is found then swap it 
            if(isVowel(s[start])&&isVowel(s[end])) {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            
            // if a vowel is found from start position
            // then decrease the end side position
            else if(isVowel(s[start])){
                end--;
            }
            
            // if a vowel is found from end position
            // then increase the start side position
            else if(isVowel(s[end])) {
                start++;
            }
            
            // if no vowel is found 
            else {
                start++;
                end--;
            }
        }
        
        return s;
}
