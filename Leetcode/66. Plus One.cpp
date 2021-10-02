/* Problem : You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
Input: digits = [4,3,2,9]
Output: [4,3,2,3,0]

Input: digits = [9]
Output: [1,0]

Input: digits = [9,9,9,9]
Output: [1,0,0,0,0]
*/
vector<int> plusOne(vector<int>& digits) {
     
        vector < int > v;
        v = digits;
        int size = digits.size()-1;

        // If last digit is 9 then handle carry 
        if(v[size] == 9){
            v[size]++;
          
            while(v[size] > 9){
                v[size] = 0;
                size--;
                // when all digit are 9
                // 999 -> 1000
                if(size<0){
                    v.insert(v.begin(), 1);
                    break;
                }
                v[size]++;
            }
                
        }
        else {
            v[size]++;
        }
        
        return v;
}
