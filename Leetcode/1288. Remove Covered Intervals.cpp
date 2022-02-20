/* Problem: Given an array intervals where intervals[i] = [li, ri] represent the interval [li, ri), remove all intervals that are covered by another interval in the list.
The interval [a, b) is covered by the interval [c, d) if and only if c <= a and b <= d. Return the number of remaining intervals.

Input: intervals = [[1,4],[3,6],[2,8]]
Output: 2
Explanation: Interval [3,6] is covered by [2,8], therefore it is removed.
*/

// solution 
int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int cnt = 0, left=-1, right=-1;
  
        // sort the 2d vector according start time
        sort(intervals.begin(), intervals.end());
        
        for(auto v : intervals){
            if(v[0]>left && v[1]>right){
                cnt++;
                left = v[0];
            }
            right = max(v[1], right);
        }
        
        return cnt;
}
// Time complexity: nlog(n)
