#include<stdio.h>
void main()
{
    int s=1,f=0,n;
    printf("enter the nos\n");
    scanf("%d%d",&s,&f);
    {
    n=f+s;
    f=s;
    s=n;
    }
    printf("the fibanocci series is %d",n);
}
