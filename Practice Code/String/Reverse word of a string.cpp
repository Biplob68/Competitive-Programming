#include<bits/stdc++.h>
using namespace std;

void reverseword(char str[])
{
    int length = strlen(str);

    int i,j;
    for(i = length-1; i>=0; i--)
    {
        if(str[i] == '\0' || str[i] == ' ')
        {
            j = i+1;
            while(str[j] != '\0' || str[j] != ' ')
            {
                printf("%c",str[j]);
                j++;
            }
            printf(" ");
        }
    }
    printf("\n");

}

int main()
{
    char str[20];
    cin>>str;
    //fgets(str, sizeof str, stdin);
    reverseword(str);

    return 0;
}
