
#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,count=0;
    char s[20];
    scanf("%s",s);
    n=strlen(s);
    for(i=0; i<n; i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
