#include<stdio.h>

int main() 
{
 int a,i,flag=0;
 printf("enter the number\n");
 scanf("%d",&a);
 for(i=3;i<a;i=i+2)
 {
     if((a%i)==0)
     flag=1;
 }
 if(flag==0)
 
     printf("no is prime");
     
 
 else
 
     printf("no is compoite");
 
}
