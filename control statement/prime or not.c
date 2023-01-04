#include <stdio.h>

int main()
{
	int i,num;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("\nNot Prime.");
			break;
		}
	}

	if(i==num)
	{
		printf("\nPrime Number.");
	}
}
