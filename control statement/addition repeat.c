
#include <stdio.h>

int main()
{
	int a,b,sum;
	char choice;

	choice='y';
	while(choice=='y')
	{
	printf("Enter two numbers to be added:\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("\nThe sum is:%d",sum);
	printf("\nDo you want to add another two numbers?");
	printf("\nPress y for yes and other characters for exit.\t");
	scanf(" %c",&choice);
	}
}
