#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,i,t,a;
    printf("The Armstrong numbers in between 100 to 500 are : \n");
    for(i = 100; i <= 500; i++)
    {
        t = i;
        sum = 0;
        while(t != 0)
        {
            a = t%10;
            sum += a*a*a;
            t = t/10;
        }

        if(sum == i)
        printf("\n%d", i);
    }
    return 0;
}