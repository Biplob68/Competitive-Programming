#include<bits/stdc++.h>

using namespace std;

int max_sequence(string str1, string str2)
{
    int len1 = str1.size();
    int len2 = str2.size();

    if(len1 == len2 && str1==str2) return -1;

    else return max(len1,len2);

}

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    int ans = max_sequence(s1, s2);
    printf("%d\n",ans);
    return 0;
}
