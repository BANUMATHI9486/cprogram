#include<stdio.h>
int main()
{
int a,n,i,b;
printf("enter the range 1");
scanf("%d",&a);
printf("enter the range 2");
scanf("%d",&n);
for(i=a;i<=n;i++)
{
b=i%2;
if(b!=0)
printf("the odd no is %d \n",i);
}
return 0;
}
