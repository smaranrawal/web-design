#include <stdio.h>


int main()
{
	char c='x';
	switch(c)
	{
		case 'v':
			printf("I am in case v.");
			break;
		case 'c':
			printf("I am in case c.");
			break;
		case 'x':
			printf("I am in case x.");
			break;
		default:
		printf("I am in default.");
	}

}
