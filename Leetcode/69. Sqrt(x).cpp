/* Given a non-negative integer x, compute and return the square root of x.
Input: x = 8
Output: 2 */

int mySqrt(int x) {
        
        if(x<2) return x;
        int left = 1, right = x;
        
        while(left<=right){
            int mid = left+(right-left)/2;
            
            if(mid == x/mid) {
                return mid;
            }
            else if(mid < x/mid) left = mid+1;
            else if(mid > x/mid) right = mid-1;
        }
        return right;
 }
