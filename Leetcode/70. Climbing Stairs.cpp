/* Problem: You are climbing a staircase. It takes n steps to reach the top.Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Input: n = 5
Output: 8
*/
// function to find out total step
int climbStairs(int n) {
        int fibo , fibo1= 0, fibo2 = 1;
        
        while(n--){
            fibo = fibo1+ fibo2;
            fibo2 = fibo1;
            fibo1 = fibo;
            //cout << fibo << " ";
        }
        return fibo+fibo2;
}
