/* Problem : Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101
*/

// Function to count number of 1 in a number
vector<int> countBits(int n) {
        
        vector <int> bit(n+1);
        if(n == 0) return {0};
        bit[0] = 0;  
        bit[1] = 1;  // 1->1
        
        for(int i=2; i<=n; i++){
            
            // If i is even then setbit(1) will be equal to setbit in i/2
            // If i is even then setbit(1) will be equal to setbit in i/2 + 1    
            if(i%2 == 0) bit[i] = bit[i/2];
            if(i%2 != 0) bit[i] = bit[i/2] +1;
        }
        
        return bit;
}

// Time Complexity : O(n)
