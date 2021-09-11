#include <bits/stdc++.h>

using namespace std;


int main()
{
    string str;

    set < string > s;
    set < string > ::iterator it;

    while(cin >> str)
    {
        string word = "";

        for(int i=0; i<str.size(); i++){

            char ch = tolower(str[i]);

            // if the char is small letter
            // then make it string
            if(ch >= 'a' && ch <= 'z') {
                word += ch;
            }

            // insert the string into set
            else if(word != "") {
                s.insert(word);
                word = "";
            }
        }

        if(word != "") {
            s.insert(word);
        }
    }

    for(it = s.begin(); it!=s.end(); it++)
    {
        cout << *it << '\n';
    }

    return 0;
}
