#include <stdio.h>

int main()
{
	int i, num;
	printf("Enter a number:");
	scanf("%d", &num);
	printf("\nThe even numbers from 2 to %d are:\n", num);
	for(i=1;i<=num;i++)
	{
	if(i%2!=0)
	{
	continue;
	}
	printf("%d\t", i);
	}
}
