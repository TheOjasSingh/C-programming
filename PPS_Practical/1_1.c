#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,area,S;
    printf("Enter sides of a triangle: \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    S=(a+b+c)/2;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Area Of triangle = %lf\n",area);
    return 0;
}