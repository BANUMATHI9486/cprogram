#include<stdio.h>
void main()
{
    int d,f,p;
    printf("enter the two numbers\n");
    scanf("%d%d",&d,&f);
    p=d-f;
    if(p%2!=0)
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
}
