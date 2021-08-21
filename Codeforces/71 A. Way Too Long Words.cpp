#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,l;
    char s[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&s);
        l=strlen(s);
        if(l<=10)
        {
            puts(s);
        }
        else if(l>10)
        {
            printf("%c%d%c\n",s[0],l-2,s[l-1]);

        }

    }
    return 0;
}
