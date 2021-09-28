#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while(n--)
    {
        string s;

        cin >> s;

        // map < char , int > m;
        int cntA=0, cntB=0, cntC=0;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == 'A') cntA++;
            if(s[i] == 'B') cntB++;
            if(s[i] == 'C') cntC++;
        }

        //cout << cntA << " " << cntB << " " << cntC<<endl;

        if(cntA>0 && cntB>0 && cntC>0 && ((cntA+cntC == cntB)) && ((cntA + cntC + cntB)%2 == 0) ){ cout << "YES" << endl; }

        else if(cntA>0 && cntB>0 && cntC == 0 && (cntA == cntB)) { cout << "YES" << endl; }

        else if(cntB>0 && cntC>0 && cntA == 0 && (cntC == cntB)) { cout << "YES" << endl; }

        else cout << "NO" << endl;
    }

    return 0;
}
