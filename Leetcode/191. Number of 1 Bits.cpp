/* Problem : Write a function that takes an unsigned integer and returns the number of '1' bits it has
Input: n = 00000000000000000000000000001011
Output: 3
*/

#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
        
        int cnt = 0;
        
        
        while(n){
            // Bitwise AND operation 
            n = n & (n-1);
            cnt++;
        }
        return cnt;
}

int main()
{
  uint32_t num;
  cin >> num ;
  
  cout << hammingWeight(num) << endl;
  
  return 0;
}

// Complexity : O(logn)
