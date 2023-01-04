#include <stdio.h>


int main()
{
	int i,j,temp;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=i;j++)
		{
			temp = temp+1;
			printf("%d\t",temp);
		}
		printf("\n");
	}

}
