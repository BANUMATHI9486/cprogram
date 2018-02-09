#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the time\n");
    scanf("%d",&a);
    c=a/60;
    b=a%60;
    printf("the hour is %d\n",c);
    printf("the minute is %d\n",b);
}
