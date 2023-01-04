
#include <stdio.h>

int main()
{
	int n, digit;

	printf("Enter number you want to reverse:");
	scanf("%d", &n);
	printf("The reverse of the entered number is:");
	while(n!=0)
	{
		digit=n%10;
		printf("%d", digit);
		n=n/10;
	}
}
