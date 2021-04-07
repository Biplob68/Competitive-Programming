#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i,cnt;
    char str[100];

    scanf("%d",&T);

    while(T--)
    {
        scanf("%s",str);
        cnt = 0;
        for (i=0; i<strlen(str); i++)
        {
            if (str[i]=='N' || str[i]=='W' || str[i]=='D')
            {
                continue;
            }
            else cnt++;
        }

        if(cnt<=6)
        {
            if(cnt==1)
            {
                printf("1 BALL\n");
            }
            if(cnt==6)
            {
                printf("1 OVER\n");
            }
            else
            {
                printf("%d BALLS\n",cnt);
            }
        }
        else if(cnt>6)
        {
            int cnt1,cnt2;
            cnt1 = cnt/6;
            cnt2 = cnt%6;


            if (cnt1==1){
                    if(cnt2==0) printf("1 OVER\n");
                    if (cnt2==1) printf("1 OVER 1 BALL\n");
                    else if(cnt2>1) printf("1 OVER %d BALLS\n",cnt2);
            }
            else{
                    if(cnt2==0) printf("%d OVERS\n",cnt1);
                    if (cnt2==1) printf("%d OVERS 1 BALL\n",cnt1);
                    else if(cnt2>1) printf("%d OVERS %d BALLS\n",cnt1,cnt2);
            }


            //printf("%d OVER %d BALL\n",cnt1,cnt2);
        }

    }
    return 0;
}
