#include <stdio.h>

int main()
{
    int i,j,count=1;

    for (i=0;i<5;i++)
    {
        for (j=0;j<=i;j++)
        {
            printf("%d\t",count);
            count =! count;
        }
        count = i %2;
        printf("\n");
    }

}
