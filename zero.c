#include<stdio.h>
void main()
{
	int n;
	printf("enter the number n");
	scanf("%d",&n);
	if(n>=0)
	{
		printf("%dthe number is positive",n);
	}
	else if(n<=0)
	{
		printf("%dthe number is negative",n);
	}
	else
	{
		printf("the number is zero");
	}
}
