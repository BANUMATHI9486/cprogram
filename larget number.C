#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
printf("enter the number a,b,c");
scanf("%f%f%f",&a,&b,&c);
if(a>=b&&a>=c)
{
printf("%the largest number",a);
}
if(b>=a&&b>=c)
{
printf("%the largest number is",b);
}
if(c>=a&&c>=b)
{
printf("%the larget number is",c);
}
}
