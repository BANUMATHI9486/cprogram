#include<stdio.h>
void main()
{
 
    
   int a,b,c,o,p,u,v,d;
    printf("enter the time\n");
    scanf("%d",&a);
    c=a/60;
    b=a%60;
    printf("the hour is %d\n",c);
    printf("the minute is %d\n",b);
    scanf("%d",&d);
    u=d/60;
    v=d%60;
    printf("the hour is %d\n",u);
    printf("the minute is %d\n",v);
    o=c-u;
    p=b-v;
    printf("%d:%d",o,p);
    
}
