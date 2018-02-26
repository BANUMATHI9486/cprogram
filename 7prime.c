#include<stdio.h>
void main()
{
    int i,n,b,flag=0;
    printf("enter the number\n");
    scanf("%d",&b);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
        break;
    }
    if(flag==0)
    {
        printf("yes it is prime no");
    }
    else
    {
        printf("not a prime no");
    }
}
