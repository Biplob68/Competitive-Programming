#include<bits/stdc++.h>

using namespace std;


int count_one(int n)
{
    int cnt = 0;
    while(n){

        n = n & (n-1);
        cnt ++;
    }

    return cnt;
}

int main()
{
    int n;

    cin >> n;

    cout << "Number of one : " << count_one(n) << endl;

    return 0;
}
