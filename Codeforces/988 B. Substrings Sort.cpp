#include<bits/stdc++.h>

using namespace std;



bool compare(string s1, string s2)
{
    return s1.length() < s2.length();
}
int main()
{
    int i, n;
    string str;
    vector < string > v;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> str;
        v.push_back(str);
    }

    // sort all the string as their length
    sort(v.begin(), v.end(), compare);

    for(i=0; i<n-1; i++){
        // if the sub string not match
        if(v[i+1].find(v[i]) == string::npos)
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    for(i=0; i<n; i++){
        cout << v[i] << endl;
    }

    return 0;
}
