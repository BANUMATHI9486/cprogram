#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
int i;
printf("enter the input");
scanf("%s",a);
strcpy(b,a);
strrev(a);
i=strcmp(a,b);
if(i==0)
{
printf(" yes palindrome");
}
else
{
printf("no palindrome");
}
return 0;
}
