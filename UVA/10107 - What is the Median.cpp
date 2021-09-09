
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // multi set for allow duplicate but sorted order
    multiset < long long  > s;
    multiset < long long > ::iterator it;

    long long temp, mid, n;


    while(cin >> n)
    {
        it = s.begin();
        s.insert(n);

        // when only one element in set then just print it
        if(s.size() == 1)
        {
            cout << *it << endl;
            continue;
        }

        mid = s.size() /2;

        // set iterator in middle position
        while(mid--)
        {
            it++;
        }

        // if set size is odd then just print middle value
        if(s.size()%2 == 1)
        {
            cout << *it << endl;
            continue;
        }
        // if set size is even then find middle two element
        // and print their average
        temp = *it;
        it--;
        temp += *it;
        cout << temp/2 << endl;

    }

    return 0;

}
