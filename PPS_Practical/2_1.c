#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,b,n;
    float y;
    printf("Enter value of a,b,x");
    scanf("%d%d%d",&a,&b,&x);
    printf("Enter value of n for solving an expression");
    scanf("%d",&n);
    switch(n)
    {
        case 1: y=a*x%b;
                break;
        case 2: y=a*x*x+b*b;
                break;
        case 3: y=a-b*x;
                break;
        case 4: y=a+x/b;
                break;
        default: printf("Wrong choice");                
    }
    printf("Value of Y is %f",y);
    return 0;
}