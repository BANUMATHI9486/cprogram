#include<stdio.h>
void main()
{
    int s=1,f=0,n,i,u;
    printf("enter the nos\n");
    scanf("%d",&u);
    printf("%d %d",f,s);
    for(i=2;i<=u;i++)
    {
    n=f+s;
    f=s;
    s=n;
    printf(" %d",n);
}
}
