#include <stdio.h>

int main()
{
	int num, count=0;
	float sum=0, avg;
	do
	{
	printf("Enter number:\n");
	scanf("%d", &num);
	sum = sum + num;
	count++;
	}while(num>0);
	sum=sum-num;
	avg=(sum)/(count-1);
	printf("\nThe sum is:\t%f", sum);
	printf("\nThe average is:\t%f", avg);
}
