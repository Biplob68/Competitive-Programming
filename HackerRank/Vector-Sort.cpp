#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    
    int i, a, n;
    cin >> n;
    
    for(i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }   
    
    sort(v.begin(), v.end());
    
    for(i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
