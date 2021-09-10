#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, test, n, m, x;

    cin >> test;

    for(i=0; i<test; i++)
    {
        printf("Case %d:\n", i+1);

        cin >> n >> m;
        string str;
        deque < int > dq(n);


        int cnt = 0;

        for(j=0; j<m; j++)
        {
            cin >> str;

            if(str == "pushLeft")
            {
                cin >> x;
                if(cnt<n)
                {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                    cnt++;
                }
                else
                    cout << "The queue is full" << endl;

            }

            else if(str == "pushRight")
            {
                cin >> x;
                if(cnt < n)
                {
                    dq.push_back(x);
                    cout << "Pushed in Right: " << x << endl;
                    cnt++;
                }
                else
                {
                    cout << "The queue is full" << endl;
                }
            }

            else if(str == "popLeft")
            {
                if(cnt > 0)
                {
                    cout << "Popped from left: " << dq.front() <<  endl;
                    dq.pop_front();
                    cnt--;
                }
                else cout << "The queue is empty" << endl;

            }

            else if(str == "popRight")
            {
                if(cnt > 0)
                {
                    cout << "Popped from right: " << dq.back() <<  endl;
                    dq.pop_back();
                    cnt--;
                }
                else
                    cout << "The queue is empty" << endl;
            }

        }
    }

    return 0;
}
