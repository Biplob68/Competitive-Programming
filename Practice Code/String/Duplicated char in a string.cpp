#include<bits/stdc++.h>

using namespace std;

void duplicatedchar(char str[])
{
    int i,j, cnt,len;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        cnt = 1;
        for(j=i+1; j<len; j++)
        {
            if(str[i] == str[j] && str[i] != ' ')
            {
                cnt++;
                //str[j] = '\0';
            }
        }
        if(cnt>1 )
        {
            printf("%c = %d times\n",str[i], cnt);

        }
    }
}

int main()
{
    char str[20];
    //printf("Enter a String: ");
    scanf("%[^\n]%c", str);

    printf("All duplicated Elements are: \n");
    duplicatedchar(str);
    return 0;
}
