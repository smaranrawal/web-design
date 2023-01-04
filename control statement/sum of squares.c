#include <stdio.h>

int main()
{
	int num,i=0,sum=0;

	printf("What is the limit:");
	scanf("%d",&num);

	do
	{
		sum = sum + i*i;
		i = i+1;
	}while(i<=num);

	printf("Sum=%d",sum);
}
