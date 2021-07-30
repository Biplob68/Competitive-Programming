/* C Program to Reverse Order of Words in a String */

#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i, j, len, startIndex, endIndex;

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	len = strlen(str);
  	endIndex = len - 1;


  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);
			}
			endIndex = i - 1;
			printf(" ");
		}
	}
	printf("\n");

  	return 0;
}

/* Improved version 
void printReverse(char str[])
{
	int length = strlen(str);

	// Traverse string from end
	for (int i = length - 1; i >= 0; i--) {
		if (str[i] == ' ') {

			// putting the NULL character at the
			// position of space characters for next iteration.
			str[i] = '\0';

			// Start from next character
			printf("%s ", &(str[i]) + 1);
		}
	}

	// printing the first word
	printf("%s", str);
}
Complexity - O(len(str))
*/
