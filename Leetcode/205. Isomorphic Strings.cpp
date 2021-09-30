/* Problem : Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. 
No two characters may map to the same character, but a character may map to itself.

Input: s = "paper", t = "title"
Output: true
Input: s = "foo", t = "bar"
Output: false
*/

bool isIsomorphic(string s, string t) {
        
        // map to map the all char of s to t
        unordered_map<char,char>map;
        // set to keep count 
        unordered_set<char>set;
        
        // if two string size is different then return false
        if(s.size() != t.size()) return false;
        
        for(int i=0; i<s.size(); i++){
            char s1= s[i], t1 = t[i];
            
            // If s1 is previously mapped then check the mapped char
            /* s = xxy , t = mna
              1. x -> m
              2. x -> n this is wrong
            */  
            if(map.count(s1)){
                if(map[s1] != t1) return false;
                else continue;
            }
            
            // one char can't be mapped with different char
            /* s = aeb, t=ddb
            1. a -> d
            2. e -> d this is wrong
            */
            else{
                if(set.count(t1)) return false;
                else {
                    set.insert(t1);
                    map[s1] = t1;
                }
            }
        }
        return true;
}
