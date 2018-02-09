#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,n,count=0;
	printf("enter the string\n");
	scanf("%s",&a);
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
	if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]==7||a[i]=='8'||a[i]=='9'||a[i]=='0')
	{
	    count++;
	}
	if(count==0)
	{
		printf("no\n");
		
	}
	else
	{
	printf("yes\n");
	}
	}
	return 0;
}
