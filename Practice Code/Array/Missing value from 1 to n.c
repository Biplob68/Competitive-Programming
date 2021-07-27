   // Method: 1
#include <stdio.h>

// Missing value from 1 to n number
int getMissing(int a[], int n)
{
	int i, total;
	total = (n + 1) * (n + 2) / 2;
	for (i = 0; i < n; i++)
		total -= a[i];
	return total;
}


int main()
{
	int arra[] = { 1, 2, 4, 5, 6 };
	int miss = getMissing(arra, 5);
	printf("The missing value: %d\n", miss);
	return 0;
}


/*
// Method: 2
#include<stdio.h>

int getMissing(int arra[], int n)
{
    int i,total =1 ;

    for(i=2; i<=(n+1); i++)
    {
        total = total+i;
        total = total - arra[i-2];
    }

    return total;
}

int main()
{
	int a[] = { 1, 2, 4, 5, 6 };
	int miss = getMissing(a, 5);
	printf("The missing value: %d\n", miss);
	return 0;
}
*/
