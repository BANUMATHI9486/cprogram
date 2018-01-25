#include<stdio.h>
#include<string.h>
void main()
{
  int c,d;
  char a[20]="hello";
   char b[20]="person";
   c=strlen(a);
   d=strlen(b);
    if(c>d)
    {
        printf( "%s",a );
    }
    else if(d>c)
    {
        printf("%s",b);
        
    }
    else
    {
        printf("%s",a);
    }
}
