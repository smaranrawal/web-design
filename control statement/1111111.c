#include <stdio.h>

int main()
{
    int i,j,a=0,sum=0;

    for (i=1;i<=3;i++)
    {
        for (j=1;j<=i;j++)
        {
            sum = (a * 10) +1;

            printf("%d\n",sum);
            a = sum;
        }
    }

}
