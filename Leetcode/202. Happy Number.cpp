/* problem : Write an algorithm to determine if a number n is happy. 
A happy number is a number defined by the following process:
* Starting with any positive integer, replace the number by the sum of the squares of its digits.
* Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
* Those numbers for which this process ends in 1 are happy.
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1 ->happy number
*/

bool isHappy(int n) {
        
        unordered_set < int > set;
       // int temp = 0;
    
        while(n != 1)
        {
            int temp = 0;
            
            // Find the sum of the squares of its digits.
            while(n){
                temp += pow((n%10),2);
                n = n/10;
            }
            
            // If the number find again into set then create a loop
            // That means the n is not happy number
            if(set.count(temp) > 0) return false;
            else set.insert(temp);
            n = temp;
        }
        
        return true;
 }
