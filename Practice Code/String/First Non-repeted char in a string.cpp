#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] ;
    scanf("%[^\n]%c", str);
    int len  = strlen(str);
    int i,j,flag;

    // Two loops to compare each character with other character
    for(i = 0; i < len; i++)
    {
        flag = 0;

        for(j = 0; j < len; j++)
        {
            // If it's equal and indexes is not same
            if((str[i] == str[j]) && (i != j))
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("First non-repeating character is %c\n",str[i]);
            break;
        }
    }

    if (flag == 1)
    {
        printf("Didn't find any non-repeating character\n");
    }

    return 0;
}
