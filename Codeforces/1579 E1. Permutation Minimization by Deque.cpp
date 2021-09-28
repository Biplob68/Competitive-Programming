#include<bits/stdc++.h>

using namespace std;

void showdq(deque <int> g)
{
    deque <int> :: iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}


int main()
{
    int test;

    cin>>test;

    while(test--)
    {
        int n;
        deque <int> deque;
        //deque <int> :: iterator it;
        deque.clear();

        cin>>n;
        while(n--)
        {
            int x;

            cin >> x;
            if(deque.size() == 0){
                 deque.push_back(x);
            }
            else if(x < deque.back() && x> deque.front() ){
                deque.push_back(x);
            }
            else if(x < deque.front()){
                deque.push_front(x);
            }
            else if(x > deque.back()){
                deque.push_back(x);
            }

        }

        for (auto it = deque.begin(); it != deque.end(); ++it){
            cout << *it << " ";
        }
        cout << '\n';
    }

    return 0;
}
