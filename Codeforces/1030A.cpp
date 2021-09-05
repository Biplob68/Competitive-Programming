#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,ans,a,b,i=0,cnt=0;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d %d", &a,&b);


        if (a%b==0){
                ans =0;
            printf("%d\n", ans);
        }
        else {
                ans = b -(a%b);
        printf("%d\n", ans);

        }


    }
    return 0;
}
