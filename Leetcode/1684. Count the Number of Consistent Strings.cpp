/* problem : You are given a string allowed consisting of distinct characters and an array of strings words.
A string is consistent if all characters in the string appear in the string allowed.
Return the number of consistent strings in the array words.

Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2

Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
Output: 4
*/


int countConsistentStrings(string allowed, vector<string>&words) {
  
        int cnt = 0;
        
        set <char> s;
        
        // Insert all char from allowed into a set
        for(int i=0; i<allowed.size(); i++){
            s.insert(allowed[i]);
        }
        
        
        for(int i=0; i<words.size(); i++){
            string str = words[i];
            
            bool flag = true;
            
            for(int j=0; j<str.size(); j++){
                
                // Check if the char is not present into set
                // the  flag is equal to false
                if(s.find(str[j]) == s.end()){
                    flag = false;
                    break;
                }
            }
            
            if(flag == true) cnt++;
        }
        
        return cnt;
}
