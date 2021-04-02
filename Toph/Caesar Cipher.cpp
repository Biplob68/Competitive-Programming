
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[100],ch,a;


    int n,i;
    scanf("%d",&n);

    a = getchar();
    //gets(str);
    scanf("%[^\n]", &str);

    for(i=0; str[i]!='\0'; i++)
    {
        ch = str[i];
        if(ch>='a' && ch<='z')
        {
            ch = ch - n;

            if(ch <'a')
            {
                ch = ch +26;
            }
            str[i] = ch;

        }
    }

    puts(str);

    return 0;

}
