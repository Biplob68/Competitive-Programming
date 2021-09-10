#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, m;
    string name, ip;

    map<string, string> website;
    map < string, string > ::iterator it;

    cin >> n >> m;

    for(i=0; i<n; i++){

        cin >> name >> ip;
        website[ip] = name;
    }


    for(i=0; i<m; i++){

        cin >> name >> ip;
        cout << name << " " << ip << " ";

        // remove semiclone(;) from IP address
        ip.erase(ip.end()-1);

        cout << "#" << website[ip] << endl;
    }

    return 0;
}
