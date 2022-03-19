/* You are given an array nums of positive integers. In one operation, you can choose any number from nums and reduce it to exactly half the number. (Note that you may choose this reduced number in future operations.)

Return the minimum number of operations to reduce the sum of nums by at least half.

Example 1:

Input: nums = [5,19,8,1]
Output: 3
Explanation: The initial sum of nums is equal to 5 + 19 + 8 + 1 = 33.
The following is one of the ways to reduce the sum by at least half:
Pick the number 19 and reduce it to 9.5.
Pick the number 9.5 and reduce it to 4.75.
Pick the number 8 and reduce it to 4.
The final array is [5, 4.75, 4, 1] with a total sum of 5 + 4.75 + 4 + 1 = 14.75. 
The sum of nums has been reduced by 33 - 14.75 = 18.25, which is at least half of the initial sum, 18.25 >= 33/2 = 16.5.
Overall, 3 operations were used so we return 3.
It can be shown that we cannot reduce the sum by at least half in less than 3 operations.
*/

int halveArray(vector<int>& nums) {
     
        if(nums.size() == 1) return 1;
        multiset <double> s;
        double sum = 0,sum1;
        
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
            sum += nums[i];
        }
        
        sum1 = 0;
        sum /= 2;
        int cnt = 0;
        
        while(sum1 < sum)
        {
            
            auto it = prev(s.end());
            double val = (*it);
            s.erase(it);
            sum1 = sum1 + (val/2);
            s.insert(val/2);
            cnt++;
            //cout << sum1 << " " << *(--s.end()) <<endl;
            
        }
        return cnt;   
 }
