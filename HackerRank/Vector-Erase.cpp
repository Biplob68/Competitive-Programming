#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    vector < int > v;
    
    int i, x, n;
    
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    
    int q, a, b;
    cin >> q;
    
    // remove the specific postion 
    if(q<v.size()) v.erase(v.begin()+q-1);
    
    cin >> a >> b;
    
    // delete element from position a to b
    if(a<b && b<v.size()){
        v.erase(v.begin()+a-1, v.begin()+b-1);
    }
    
    cout << v.size() << endl;
    
    for(i=0; i<v.size(); i++){
        cout << v[i] << " " ;
    }
    return 0;
}
