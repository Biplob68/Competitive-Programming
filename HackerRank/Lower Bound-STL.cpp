#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector< int > v;
    int i, n, x, q, y;
    
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }  
    
    sort(v.begin(), v.end());
    
    cin >> q;
    
    for(i=0; i<q; i++){
        cin >> y;
        
        // find the lower bound of the number y
        std :: vector<int>::iterator low = lower_bound(v.begin(), v.end(), y);
            
        // if lower bound of the number is equal to the number
        // then the number is present in the list otherwise no
        if(v[low-v.begin()] == y) {
            cout << "Yes" << " " << low-v.begin()+1 <<endl;
        }
        else {
            cout << "No" << " " << low-v.begin()+1 <<endl;
        }
    }

    return 0;
}
