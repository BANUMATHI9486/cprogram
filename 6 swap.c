#include<stdio.h>
void main()
{
    int t,r;
    printf("enter the no");
    scanf("%d %d",&t,&r);
    t=t+r;
    r=t-r;
    t=t-r;
    printf("the swapping two no are%d %d",t,r);
}
