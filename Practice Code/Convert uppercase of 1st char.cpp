//Program to capitalize first character of each word in a string in C

#include<stdio.h>

#define MAX 500

void uppcase(char str[])
{
    int i;

    for(i=0; i<str[i] != '\0'; i++)
    {
        if(i==0)
        {
            if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32;
			continue;
        }
        if(str[i] == ' ')
        {
            i++;
            if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32;
			continue;
        }
        else
		{
			//all other uppercase characters should be in lowercase
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32;
		}

    }

}
int main()
{
    char str[MAX];
    printf("Enter a string: ");
    scanf("%[^\n]s",str); //read string with spaces

    uppcase(str);
    printf("Capitalize string is: %s\n",str);

}
