#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string,int>m;
    
    int n;
    string str;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> str;
        m[str]++;
        if(m[str] > 1){
            cout << str<<m[str]-1<<endl;
        }
        else cout << "OK"<<endl;
    }
    
    return 0;
}
