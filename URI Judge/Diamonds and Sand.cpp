#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    string str;

    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        //scanf("%s",&str);

        cin >> str;
        int length = str.length();
        int cnt=0;
        int tmp=0;

        for(int j=0; j<length; j++)
        {
            if(str[j] == '<')
            {
                tmp++;
            }
            if(str[j] == '>' && tmp>0)
            {
                cnt++;
                tmp--;
            }
        }

        printf("%d\n", cnt);
    }
    return 0;
}
