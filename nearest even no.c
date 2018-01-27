#include<stdio.h>
void main()
{
    int a;
    printf("enter the no");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the nearest even no is %d\n",a-2);
        
    }
    else
    {
        printf("the nearest even no is %d\n",a-1);
    }
}
