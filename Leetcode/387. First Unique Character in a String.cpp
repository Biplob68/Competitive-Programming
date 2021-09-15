/* Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
Input: s = "loveleetcode"
Output: 2

Input: s = "aabb"
Output: -1
*/

// function to find 1st non repeted char in the string 
int firstUniqChar(string s) {
        int len = s.size();
        int pos ;
        
        int flag ;
        
        for(int i=0; i<len; i++)
        {
            flag = 0;
            
            for(int j=0; j<len; j++){
                if(s[i] == s[j] && i!=j){
                    flag = 1;
                    break;
                }
            }
           
            if(flag == 0) {
                return i;
            }
            
        }
        
        return -1;
}
