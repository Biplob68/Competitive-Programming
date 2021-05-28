#include<stdio.h>

int stringCompare(char str1[], char str2[])
{
    int i=0, flag = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
            break;
        }

        i++;
    }

    if(flag == 0 && str1[i]=='\0' && str2[i]=='\0'){
        return 1;
    }
    else return 0;
}


int main()
{
    char s1[20], s2[20];
    printf("Enter 1st string : ");
    scanf("%s", s1);
    printf("\nEnter 2nd string : ");
    scanf("%s", s2);
    int compare = stringCompare(s1,s2);

    if(compare == 1)
        printf("\n\nBoth the strings are exactly same.\n\n");
     else
        printf("\n\nBoth the strings are different.\n");

    return 0;

}
