#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,strength;
    cin >> n;
    unordered_map<int,int>factor;

    while(n--){
        cin >> strength;
        int root = sqrt(strength);

        for(int i=2; i<=root; i++){

            if(strength%i == 0) factor[i]++;
            while(strength%i == 0) strength /= i;
        }
        if(strength>1) factor[strength]++;
    }

    int ans = 1;

    for(auto it=factor.begin(); it!=factor.end(); it++){
        ans = max(ans, it->second);
    }

    cout << ans << endl;
}
