#include <stdio.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; // Store frequency of each character
    int i = 0, max;
    int ascii;

    printf("Enter any string: ");
    gets(str);

    /* Initializes frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
       // printf("%d\n",ascii);
        freq[ascii] += 1;

        i++;
    }


    /* Finds maximum frequency */
    max = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }



    printf("Maximum occurring character is '%c' = %d times.", max,  freq[max]);

    return 0;
}

