#include<stdio.h>
void main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    while(a%10!=0)
    {
    a++;
    }
    printf("%d",a);
}
