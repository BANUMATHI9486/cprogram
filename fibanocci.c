#include<stdio.h>
void main()
{
    int s=1,f=0,n,i,b;
    printf("enter the nos\n");
    scanf("%d",&b);
    printf("%d %d",f,s);
    for(i=2;i<=b;i++)
    {
    n=f+s;
    f=s;
    s=n;
    printf(" %d",n);
}
}
