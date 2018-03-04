#include<stdio.h>
void main()
{
    int a,b,x,y,temp,ans;
    printf("enter the number\n");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
    temp=b;
    b=a%b;
    a=temp;
    }
    ans=(x*y)/a;
    printf("%d",ans);
    
    
    
}
