#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        stack < int > st;
        queue < int > q;
        priority_queue < int > pq;

        bool isStack = true, isQueue = true, isPQ = true;

        while(n--)
        {
            int op, x;
            cin >> op >> x;

            switch(op)
            {
            case 1:
            {
                if(isStack) st.push(x);
                if(isQueue) q.push(x);
                if(isPQ) pq.push(x);
                break;
            }
            case 2:
            {
                if(isStack)
                {
                    if(st.empty() || st.top()!=x) isStack = false;
                    else st.pop();
                }

                if(isQueue)
                {
                    if(q.empty() || q.front()!=x) isQueue = false;
                    else q.pop();
                }

                if(isPQ)
                {
                    if(pq.empty() || pq.top()!=x) isPQ = false;
                    else pq.pop();
                }

                break;
            }
            }

        }


        if(isStack == true && isQueue == false && isPQ == false)
            cout << "stack" << endl;
        else if(isStack == false && isQueue == true && isPQ == false)
            cout << "queue" << endl;
        else if(isStack == false && isQueue == false && isPQ == true)
            cout << "priority queue" << endl;
        else if(isStack == false && isQueue == false && isPQ == false)
            cout << "impossible" << endl;
        else
            cout << "not sure" <<endl;

    }

    return 0;
}
