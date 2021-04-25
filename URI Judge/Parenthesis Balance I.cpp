#include<bits/stdc++.h>

using namespace std;

int main()
{

    char str[1001];

    while(cin>>str)
    {

        int length = strlen(str);
        int cnt=0, cnt1=0;

        for(int j=0; j<length; j++)
        {
            if(str[j] == '(')
            {
                cnt++;
            }
            if(str[j] == ')')
            {
                cnt1++;
                if(cnt>0) {
                cnt--;
                cnt1--;
               }
            }
        }

        if(cnt== 0 && cnt1==0){
            printf("correct\n");
        }
        else printf("incorrect\n");
    }
    return 0;
}
