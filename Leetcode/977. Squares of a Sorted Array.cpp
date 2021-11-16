vector<int> sortedSquares(vector<int>& nums) {
        
        int l=0, r=nums.size()-1;
        vector<int>v(nums.size());
        
        for(int i=nums.size()-1; i>=0; i--){
            if(abs(nums[r]) > abs(nums[l])){
                v[i] = nums[r]*nums[r];
                r--;
            }
            else {
                v[i] = nums[l]*nums[l];
                l++;
            }
            
        }
        
        return v;
        
        /*
        multiset<int> s;
        vector<int> v;
        
        for(int i=0; i<nums.size(); i++){
            int num = nums[i]*nums[i];
            s.insert(num);
        }
        
        for(auto it=s.begin(); it!=s.end(); it++){
            v.push_back(*it);
        }
        return v; */
}
