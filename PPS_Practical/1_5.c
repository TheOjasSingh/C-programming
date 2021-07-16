#include<stdio.h>
int main()
{
    float M,P,C,mp,t;
    printf("Enter marks of student in physics");
    scanf("%f",&P);
    printf("Enter marks of student in chemistry");
    scanf("%f",&C);
    printf("Enter marks of student in Maths");
    scanf("%f",&M);
    mp=M+P;
    t=M+P+C;
    if(P>40 && C>50 && M>60)
    {
        printf("Eligible for course");
    }
    else if(mp>150)
    {
        printf("Eligible for course");
    }
    else if(t>200)
    {
        printf("Eligible for course");
    }
    return 0;
}