/* problem: Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
Input: x = 2.00000, n = 10
Output: 1024.00000

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
*/


double myPow(double x, int n) {
        
        // when n is negative
        if(n<0) return 1/x * myPow(1/x, -(n+1) );
      
        // base condition
        if(n==0) return 1;
        
        // If n is even number
        if(n%2==0){
            double y = pow(x, n/2);
            return y*y;
        }
        
        // If n is odd number
        else return x*myPow(x, n-1);
        
}
