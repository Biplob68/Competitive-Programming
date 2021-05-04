#include<bits/stdc++.h>

using namespace std;

int main()
{
    int index, last, cnt=0, test;
    string Browser[102];
    string str;

    cin>>test;

    while(test--)
    {
        index=0, last=0;
        Browser[last] = "http://www.lightoj.com/";
        printf("Case %d:\n",++cnt);
        while(cin>>str)
        {
            if(str == "QUIT") break;
            if(str == "VISIT")
            {
                cin>>str;
                cout<<str<<endl;
                Browser[++index] = str;
                last = index;
            }

            if(str == "BACK")
            {
                if(index-1 < 0) cout<<"Ignored"<<endl;
                else
                {
                    cout << Browser[--index] << endl;
                }
            }

            if(str == "FORWARD")
            {
                if(index+1 > last) cout<<"Ignored"<<endl;

                else
                {
                    cout << Browser[++index] << endl;
                }
            }


        }
    }
    return 0;
}
