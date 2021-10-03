/* Problem: Implement strStr(). Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Input: haystack = "hello", needle = "ll"
Output: 2
Input: haystack = "aaaaa", needle = "bba"
Output: -1
*/

int strStr(string haystack, string needle) {
        
        int len1 = haystack.length(), len2 = needle.length();
        
        if(len2>len1) return -1;
        if(len2 == 0) return 0;
        
        int index=0, i=0, j=0;
        
        while(i<len1 && j<len2){
            if(haystack[i++] == needle[j]){
                j++;
            }
            else {
                i = i-j;
                index = i;
                j = 0;
            }
        }
        
        if(j == len2) return index;
        else return -1;
}
