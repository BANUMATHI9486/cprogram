#include<stdio.h>
int main()
{
int a,n,b,i;
printf("enter the range 1");
scanf("%d",&a);
printf("enter the range 2");
scanf("%d",&n);
for(i=a;i<=n;++i)
{
b=i%2;
if(b==0)
printf("the even no is %d \n",i);
}
return 0;
}
