#include<stdio.h>
void main()
{
    int a,b,x,y,temp,ans;
    printf("enter the number\n");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(a!=0)
    {
    temp=a;
    a=a%b;
    b=temp;
    }
    ans=(x*y)/b;
    printf("%d",ans);
    
    
    
}
