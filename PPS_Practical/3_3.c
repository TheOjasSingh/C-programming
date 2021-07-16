#include<stdio.h>
int main()
{
    int i,j,x;
    int a,b;
    for(i=3;i>=1;i--)
    {
        x=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}