#include<stdio.h>
void main()
{
    int u,v;
    printf("enter the no\n");
    scanf("%d %d",&u,&v);
    u=u+v;
    v=u-v;
    u=u-v;
    printf("the swapping two no are %d %d",u,v);
}
