/* Given a string, you have to reverse it */ 

// Method - 1 ---> By swaping char 
void reverseString(vector<char>& s) {
        int len = s.size();
        int h= len-1;
        
        for(int i=0; i<len/2; i++){
        
            swap(s[h], s[i]);
            h--;
            
        }
}
-----------------------------------------------
// Method - 2 ---> Using recursion
void reverseString(vector<char>& s) {
  
        int start = 0, end = s.size()-1;
        // call recursive function
        reverse(s, start, end);
 }

void reverse(vector<char>& s, int start, int end)
    {
        if(start>=end) return;
        
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        
        reverse(s, start+1, end-1);
}
