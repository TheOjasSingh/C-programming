#include<stdio.h>
#include<conio.h>
int main()
{
    float BS,DA,HRA,PF,Net;
    printf("Enter basic salary of an employee : \n");
    scanf("%f",&BS);
    DA=0.25*BS;
    HRA=0.15*BS;
    PF=0.1*(BS+DA+HRA);
    Net=DA+HRA+PF+BS;
    printf("Net Salary of Employee: %f\n",Net);
    return 0;
}