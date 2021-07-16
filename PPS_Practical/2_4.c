#include<stdio.h>
int main()
{
	int num,i,j,fact,sum=0;//variables
	printf("Enter the last number of series:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=1;
		if(i!=num)
			printf("%d!+ ",i);
		else
			printf("%d!= ",i);
		for(j=1;j<=i;j++){
			fact=fact*j;}
		sum=sum+fact;
	}
	printf("%d",sum);
	return 0;
}