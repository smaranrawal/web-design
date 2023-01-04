#include <stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter the limit:");
	scanf("%d",&num);
	for (int i=1;i<=num;i++)
	{
		sum = sum + i*i;
	}
	printf("%d",sum);
}
