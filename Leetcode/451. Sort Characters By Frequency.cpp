/* Problem: Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them. 

Input: s = "tree"
Output: "eert"
*/

string frequencySort(string s) {
        unordered_map<char, int>m;
        
        // find out frequency for all char using map
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        
        priority_queue< pair<int,char>> pq;
        
        // store value from map to priority queue
        for(auto it=m.begin(); it!=m.end(); it++){
            pq.push(make_pair(it->second, it->first));
        }
        string str="";
        
        while(!pq.empty()){
            for(int i=0; i<pq.top().first; i++){
                str += pq.top().second;
            }
            pq.pop();
        }
        
        return str;
}

 
