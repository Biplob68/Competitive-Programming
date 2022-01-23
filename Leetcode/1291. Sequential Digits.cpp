/* problem: An integer has sequential digits if and only if each digit in the number is one more than the previous digit.
Return a sorted list of all the integers in the range [low, high] inclusive that have sequential digits.
*/

// solution: 
vector <int> sequentialDigits(int low, int high) {
     
        vector<int> ans;
        
        for(int i=1; i<=8; i++){
            int num = i;
            for(int j=i+1; j<=9; j++){
                num = num*10 + j;
                if(num>=low && num<=high) ans.push_back(num);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
}
 
