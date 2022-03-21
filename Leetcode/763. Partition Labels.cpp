/* You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.
Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.
Return a list of integers representing the size of these parts.

Example 1:

Input: s = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.
*/

vector<int> partitionLabels(string s) {
     
        unordered_map <int,int> mp;
        vector<int> result;
        
        // mapping last occur of every char 
        for(int i=0; i<s.size(); i++){
            mp[s[i]-'a'] = i;
        }
        
        int anchor = 0, j=0;
        
        for(int i=0; i<s.size(); ++i){
            // Last position of the char
            int last = mp[s[i]-'a'];
            // update last position of every char
            if(last > j) j = last;
            // If last position and index is same then we can partition
            if(i == j){
                result.push_back(i-anchor+1);
                anchor = i+1;
            }
        }
        
        return result;
}
// Time complexity: O(n)
