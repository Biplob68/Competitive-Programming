/ * Given two integer arrays nums1 and nums2, return an array of their intersection.
  Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
*/
  
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector < int > v;
        unordered_map<int,int>map;
      
        for(int i=0; i<nums1.size(); i++){
            map[nums1[i]]++;
        }
        
        for(int i=0; i<nums2.size(); i++){
            
            // if the number is fount then push it and decrease the count 
            // of the number from map
           if(map.find(nums2[i]) != map.end() && --map[nums2[i]] >=0){
               v.push_back(nums2[i]);
           }
        }
        
        return v;
}
