#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,n, m,k, ans, joker;

    cin >> test;

    while(test--)
    {
        cin >> n >> m >> k;

        int card = n/k;
        if(m == 0){
            printf("0\n");
            continue;
        }

        else if(card >= m) ans = m;
        else if(card < m)
        {
            if( (m-card)%(k-1)==0 ){
                joker = (m-card) / (k-1);
                ans = abs(card-joker);
            }
            else{
                joker = (m-card) / (k-1) +1;
                ans = abs(card-joker);
            }
        }

        printf("%d\n", ans);
    }
    return 0;
}
