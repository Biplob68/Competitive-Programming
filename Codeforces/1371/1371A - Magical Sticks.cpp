
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,n;

    scanf("%d",&t);

    for(int i=0; i<t; i++){
        scanf("%d",&n);

        int cnt = n/2;
        if(n%2 == 1){
            cnt++;
        }

        printf("%d\n",cnt);
    }

 return 0;
}
