#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s,s2;
        cin >> s >> s2;
        map < char,int > m;
        m.clear();


        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }

        string str = "" ;
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            int val = it->second;
            for(int j=0; j<val; j++)
            {
                str += (it->first);
            }

        }

        cout << "output " <<  str << endl;
    }

    return 0;
}
