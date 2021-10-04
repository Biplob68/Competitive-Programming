/* Problem: Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. 
Input: numbers = [2,3,4], target = 6
Output: [1,3]
*/


// Solution - 1 --> Using hashmap
vector<int> twoSum(vector<int>& numbers, int target) {
        
        unordered_map<int, int> m;
        int index1, index2;
        
        // first all value put into map
        for(int i=0; i<numbers.size(); i++)
        {
            m[numbers[i]] = i+1;
        }
        
        for(int i=0; i<numbers.size(); i++){
            // find the target value
            int num = target-numbers[i];
            auto it = m.find(num);
            
            // if the value can find into map then return the index
            if(it != m.end()){
                index1 = i+1;
                index2 = it->second;
                break;
            }
                
        }
        vector<int>v{index1, index2};
        return v;
}

// Solution - 2 --> Using two pointer
vector<int> twoSum(vector<int>& numbers, int target){
        int start = 0; end = numbers.size()-1; 
  
        while(numbers[start]+numbers[end] != target)
        {
          // when the target is greater, then increase the first pointer
          // else decrease the end pointer
          if(numbers[start]+numbers[end] < target) start++;
          else end--;
        }
        return vector<int>{start+1, end+1};
}
          
