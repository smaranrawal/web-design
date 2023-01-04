#include <stdio.h>

int main()
{
	int iit,phy,maths,dl,c;
	int percentage;

	printf("Enter the marks of:\n");
	printf("IIT:");
	scanf("%d",&iit);
	printf("Physics:");
	scanf("%d",&phy);
	printf("Maths:");
	scanf("%d",&maths);
	printf("Digital Logic:");
	scanf("%d",&dl);
	printf("C Programming:");
	scanf("%d",&c);

	percentage = (iit+phy+maths+dl+c) / 5;
	printf("Percentage:%d%%\n",percentage);

	if (percentage>=80)
	{
		printf("Distinction.");
	}
	else if(percentage>=70 && percentage<=79)
	{
		printf("First Division.");
	}
	else if (percentage>=60 && percentage<=69)
	{
		printf("Second Division.");
	}
	else if (percentage>50 && percentage<=59)
	{
		printf("Third Division.");
	}
	else
	{
		printf("Fail.");
	}
}
