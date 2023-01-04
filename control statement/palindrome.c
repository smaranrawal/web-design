#include <stdio.h>

int main()
{
	int num, rev=0, digit, temp;

	printf("Enter number to be checked:");
	scanf("%d", &num);
	temp = num;
	while(num!=0)
	{
	digit = num%10;
	rev = rev*10 + digit;
	num = num/10;
	}
	if(temp==rev)
	{
		printf("\nThe number is a palindrome");
	}
	else
	{
		printf("\nThe number is not a palindrome");
	}
}
