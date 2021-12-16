#include<bits/stdc++.h>

using namespace std;


int gcd(int a, int b){

    if(b==0) return a;

    else return (b, a%b);
}

/*

void play_game(vector<long long>&nums, int n)
{

    long long g = nums[0];

    for(int i=1; i<n; i++){
        g = gcd(nums[i], g);
    }

    long long ans = (nums[n-1] / g) - n  ;

    if(ans%2==1) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}
*/

int main()
{
    int n;
    vector <int> game;

    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        game.push_back(x);
    }

    sort(game.begin(), game.end());

    int g = game[0];

    for(int i=1; i<game.size(); i++){
        g = __gcd(game[i], g);
    }
    int ans = (game[n-1]/g) - n;

    if(ans%2==1) cout << "Alice" << endl;
    else cout << "Bob" << endl;

    return 0;
}
