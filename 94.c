#include<stdio.h>

void main()
{
 int n,k,p,i,j,count=0;
 printf("enter the number\n");

 printf("enter the range\n");
 scanf("%d",&p);
 printf("enter the two no\n");
 scanf("%d%d",&n,&k);
 for(i=0;i<p;i++)
 {
 scanf("%d",&j);
 if(j==k)
 {
     count++;
 }
 }
 if(count==1)
 {
     printf("%d",k);
 }
}
