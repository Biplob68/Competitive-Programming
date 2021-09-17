#include <bits/stdc++.h>

using namespace std;
int main()
{


    map < int, int > mp;
    map < int, int > :: iterator it;


    // insert key and value into map
    mp.insert(pair<int,int>(2,8));
    mp.insert(pair<int,int>(3,9));
    mp.insert(pair<int,int>(4,10));
    mp[5] = 10;
    mp[6] = 12;


    // print all from map
    for(it=mp.begin(); it!=mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    // random access for key 6
    cout << mp[6] <<endl;

    // delete element form map
    mp.erase(mp.begin(), mp.find(3)); // remove begin to less than key 3


    // lower and upper bound value
    cout << "Upper and lower value"<<endl;
    cout << mp.lower_bound(5)->second << endl; // 10
    cout << mp.upper_bound(5)->second << endl; // 12

    // check if key 5 is present or not
    if (mp.count(5))
        cout << "The key 5 is present\n";
    else
        cout << "The key 5 is not present\n";

}
