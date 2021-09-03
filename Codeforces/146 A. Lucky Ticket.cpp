#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a,i;
    string str;

    cin >> n;
    cin >> str;


    for(i=0; i<n; i++){
        if(str[i]!='4' && str[i]!='7'){
            printf("NO\n");
            //break;
            return 0;
        }
    }
    int sum1 = 0;
    int sum2 = 0;


    for(i=0; i<n/2; i++){
        sum1 += str[i];
    }

    for(i=n/2; i<n; i++){
        sum2 += str[i];
    }

    if(sum1 == sum2) printf("YES\n");
    else printf("NO\n");

    return 0;
}
