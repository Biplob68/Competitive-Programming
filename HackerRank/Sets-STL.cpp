#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
 
    set < int > s;
    int test, x, y;
    
    cin >> test;
    
    for(int i=0; i<test; i++){
        cin >> y >> x;
        
        if(y == 1) s.insert(x);
        if(y == 2) s.erase(x);
        if(y == 3) {
            
            // if the element is found then the element is return
            // otherwise the end of the container is return
            if(s.find(x) != s.end()){
                cout<<"Yes"<<endl;
            }
            else {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}



