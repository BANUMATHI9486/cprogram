#include<stdio.h>
void main()
{
    int sum=0,d=1,i,n,t;
    printf("enter the range\n");
    scanf("%d",&n);
    printf("enter the starting no\n");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        sum=sum+t;
        t=t+d;
        
    }
    printf("the arithmatic progression is %d\t",sum);
}
