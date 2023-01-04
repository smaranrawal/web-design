#include <stdio.h>


int main()
{
	int a[5],i;
	printf("Enter 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nWe have entered these 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}

}
