#include <stdio.h>

int main()
{
	int n1,n2,n3;

	printf("Enter 3 numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	{
	printf("\n%d is the greatest number.",n1);
	}
	else if(n2>n1 && n2>n3)
	{
	printf("\n%d is the greatest number.",n2);
	}
	else
	{
	printf("\n%d is the greatest number.",n3);
	}
}
