#include <stdio.h>


int main()
{
	int j,num,count=0;

	printf("Enter your number:");
	scanf("%d",&num);
	printf("Factors:");
	for (j=1;j<num;j++)
	{
		if (num % j == 0)
		{
			count = count + 1;
			printf("%d,",j);
		}
	}

	if (count>1)
	{
		printf("%d\n",num);
		printf("Composite\n");
	}
	else
	{
		printf("%d\n",num);
		printf("Prime");
	}

}
