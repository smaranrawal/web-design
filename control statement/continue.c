#include<stdio.h>
void main()
{
    int i ,num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("the even number\n",num);
    for (i=1;i<=num;i++)
    {
        if(i%2!=0)
            continue;
            printf("\t%d",i);


    }
}
