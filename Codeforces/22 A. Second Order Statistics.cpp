#include<bits/stdc++.h>

using namespace std;


int main()
{
    int x, n;
    vector < int > v;
    vector < int > :: iterator it;

    scanf("%d", &n);

    int k = n;

    while(n--){
        scanf("%d",&x);
        v.push_back(x);
    }

    if(k == 1) {
        printf("NO\n");
        return 0;
    }


    sort(v.begin(), v.end());


    for(it=v.begin(); it!=v.end()-1; it++) {

        if( (*it) != *(it+1)){
            cout << *(it+1) << endl;
            return 0;
        }
    }

    printf("NO\n");
}
/*
int main()
{
    int x, n;
    cin >> n;
    set < int > s;
    set < int > ::iterator it;

    while(n--){
        cin >> x;
        s.insert(x);
    }

    it = s.begin();
    it++;

    if(s.size() == 1){
        cout << "NO" << endl;
        return 0;
    }

    cout << *it << endl;
}
*/
