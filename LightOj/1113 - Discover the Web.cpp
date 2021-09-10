#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, T;

    cin >> T;

    for(i=0; i<T; i++)
    {
        stack < string > Back;
        stack < string > Forward;

        string str;
        string url = "http://www.lightoj.com/";
        Back.push(url);


        printf("Case %d:\n",i+1);

        while(cin >> str)
        {
            if(str == "QUIT") break;


            if(str == "VISIT")
            {
                cin >> url;
                Back.push(url);
                cout << url << endl;

                // when visit a url then forward stack should be empty
                while( !Forward.empty())
                {
                    Forward.pop();
                }

            }

            else if(str == "BACK" && Back.size() > 1)
            {
                // if back command then the current url push
                // into forward stack and pop from back stack
                Forward.push(Back.top());
                Back.pop();
                cout << Back.top() << endl;

            }

            else if(str == "FORWARD" && Forward.size() > 0)
            {
                // if forward command then show top url from forward stack
                // also push it back stack and pop form forward top
                Back.push(Forward.top());
                cout << Forward.top() << endl;
                Forward.pop();

            }

            else {
                cout << "Ignored" << endl;
            }
        }

    }

    return 0;
}
