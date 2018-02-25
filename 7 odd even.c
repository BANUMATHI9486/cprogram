#include<stdio.h>

int main()
{
   int x,y,n;
   printf("enter the numbers\n");
   scanf("%d%d",&x,&y);
   n=x+y;
   if(n%2==0)
   {
       printf("even");
   }
   else
   {
       printf("odd");
       
   }
}
