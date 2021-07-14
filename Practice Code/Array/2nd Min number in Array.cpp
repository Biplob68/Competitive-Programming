#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n,i,min,second_min;

	printf("Enter size of array: ");

	scanf("%d",&n);

	int a[n];

	printf("Enter %d Elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	min=INT_MAX;
	second_min=INT_MAX;
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			second_min=min;
			min=a[i];
		}
		else if(a[i] < second_min && a[i]!=min)
		{
			second_min=a[i];
		}
	}

	printf("The second minimum is : %d\n",second_min);
	return 0;
}
