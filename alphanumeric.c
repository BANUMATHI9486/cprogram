#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,c;
          char a[20]="francy345";
          l=strlen(a);
          for(i=1;i<=l;i++)
{
	while(((a[i]=='a')||(a[i]=='A'))&&((a[i]=='z')||(a[i]=='Z')))
	{
		c++;
	}
}          
          if(c==l)
          {
          	printf("%s is alphabet",a);
          }
          else
          {
          	printf("%s ic alphabet and numeric",a);
          }
          return 0;
}
