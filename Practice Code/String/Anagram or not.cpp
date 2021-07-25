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
