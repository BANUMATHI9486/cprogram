#include<stdio.h>
int main()
{
int a,n,i,d,sum=0,f;
printf("enter the range 1");
scanf("%d",&a);
printf("enter the range 2");
scanf("%d",&n);
for(i=a;i<=n;i++)
{
d=f%10;
sum=sum+d*d*d;
f=f%10;
printf("the armstrong no is %d \n",sum);
}
return 0;
}
