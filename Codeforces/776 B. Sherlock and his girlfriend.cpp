#include<bits/stdc++.h>

using namespace std;

int marked[100005];


int main()
{
    int i, n , j;

    cin >> n;

    for (i=2; i*i<=n+1; i++){

        if (marked[i] == 0){ // is a prime
            for (j=i*i; j<=n+1; j+=i){
                marked[j] = 1;

            }
        }
    }



    if(n>2) cout << "2" << endl;
    else cout << "1" << endl;

    for(i=2; i<=n+1; i++){
        if(marked[i] == 0) cout << "1 " ;
        else cout << "2 " ;
    }

    return 0;
}
