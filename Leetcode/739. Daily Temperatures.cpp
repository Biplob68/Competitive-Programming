/* Problem: Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait 
after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.
*/

vector<int> dailyTemperatures(vector<int>& temperatures) {
     
        int n = temperatures.size();
        vector<int>answer(n);
        
        stack<int>s;
        
        for(int currday=0; currday<n; currday++){
            
            int currTemp = temperatures[currday];
            
            // When stack is  not empty and the current temperatures is greater than the stack top
            // then we should put it into answer and pop from stack
            while(!s.empty() && temperatures[s.top()] < currTemp){
                int preday = s.top();
                s.pop();
                answer[preday] = currday - preday;
            }
           
            s.push(currday);
        }
        
        return answer;
}
// Time Complexity: O(n)
