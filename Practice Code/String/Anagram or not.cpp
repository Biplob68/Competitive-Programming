#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{
    int l1, l2;
    l1 = s1.length();
    l2 = s2.length();

    if(l1 != l2) return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for(int i=0; i<l1; i++){
        if(s1[i] != s2[i])
            return false;
    }

    return true;
}

int main()
{
    string str1 = "spar";
    string str2 = "rasp";

    // Function Call
    if (anagram(str1, str2))
        cout << "The two strings are anagram of each other"<<endl;
    else
        cout << "The two strings are not anagram of each other"<<endl;
    
    return 0;
}

// Time Complexity: O(nLogn)--> For sort function

/* 
------------------------------------------
Input the two strings.
Create an array for both the strings.
Traverse both the strings and store the count of the alphabets of both the strings in respective arrays.
Check if both the arrays are equal.
If both the arrays are equal, return true. Else, return false.
----------------------------------------

int check_anagram(char a[], char b[])
{
    int first[26] = {0}, second[26] = {0}, c=0;

// Calculating frequency of characters of first string

    while (a[c] != ‘\0’)
    {
        first[a[c]-‘a’]++;
        c++;
    }

    c = 0;

    while (b[c] != ‘\0’)
    {
        second[b[c]-‘a’]++;
        c++;
    }

// Comparing frequency of characters

    for (c = 0; c < 26; c++)
    {
        if (first[c] != second[c])
            return 0;
    }

    return 1;
}
*/
