 
string kthDistinct(vector<string>& arr, int k) {
        int len = arr.size();
        map<string ,int> mp;
        
        // store all string into map
        for(int i=0; i<len; i++){
            mp[arr[i]]++;
        }
        
        stack<string>st;
        
        for(int i=0; i<len; i++){
            if(mp[arr[i]] == 1) {
                st.push(arr[i]);
                k--;
                if(k==0){
                 return st.top();
                }
            }    
        }
        return "";  
 }
