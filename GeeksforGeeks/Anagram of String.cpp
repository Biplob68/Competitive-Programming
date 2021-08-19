/*
Given two strings S1 and S2 in lowercase, the task is to make them anagram. 
The only allowed operation is to remove a character from any string. 
Find the minimum number of characters to be deleted to make both the strings anagram.
Input: S1 = bcadeh
       S2 = hea
Output: 3
Explanation: We need to remove b, c and d from S1.
*/

int remAnagram(string str1, string str2)
{
    // calculate frequency of each character
    int count1[26] = {0}, count2[26] = {0};
 
    // count frequency of each character in first string
    for (int i=0; str1[i]!='\0'; i++){
        count1[str1[i]-'a']++;
    }
 
    // count frequency of each character in second string
    for (int i=0; str2[i]!='\0'; i++){
        count2[str2[i]-'a']++;
    }
 
    // traverse count arrays to find number of characters to be removed
    int step = 0;
    for (int i=0; i<26; i++){
        step += abs(count1[i] - count2[i]);
    }
    
    return step;

}
