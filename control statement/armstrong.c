#include <stdio.h>

int main()
{
	int num,digit,sum=0;
	int temp;

	printf("Enter number to be checked:");
	scanf("%d", &num);
	temp=num;
	while(num!=0)
	{
		digit = num % 10;
		sum += digit*digit*digit;
		num /= 10;
	}
	if(temp==sum)
		printf("\nArmstrong Number!!!");
	else
		printf("Not Armstrong Number.");
}
