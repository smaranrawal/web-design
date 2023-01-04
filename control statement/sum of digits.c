#include <stdio.h>

int main()
{
	int num, rem, q, sum=0;

	printf("Enter number to be checked:");
	scanf("%d", &num);
	do
	{
		q = num / 10;
		rem = num % 10;
		num = q;
		sum += rem;
	}while(q!=0);
	printf("The sum of digits is:%d", sum);
}
