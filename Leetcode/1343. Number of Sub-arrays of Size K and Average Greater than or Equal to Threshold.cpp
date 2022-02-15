/* Problem: Given an array of integers arr and two integers k and threshold, return the number of sub-arrays of size k and average greater than or equal to threshold

Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
Output: 3
Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All other sub-arrays of size 3 have averages less than 4 (the threshold).

*/

// Solution using sliding window
   
int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        
        int sum = 0, cnt = 0, mul = k*threshold;
        
        for(int i=0; i<k; i++){
            sum += arr[i];
        }
        if(sum >= mul) cnt++;
        
        for(int i=k; i<arr.size(); i++){
            sum += arr[i] - arr[i-k];
            if(sum >= mul) cnt++;
        }
        return cnt;
}
