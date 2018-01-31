#include<stdio.h>
int main()
{
	int i,j,a[50],n,t;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++);
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		
		
		}
	}
		printf("the sorted elements are\n");
			for(i=0;i<=n;i++)
			{
			printf("%d",a[i]);
			}
			if((n%2)==0)
			{
			    printf("%d",(a[n/2]+a[n/2+1])/2);
			}
			else
			{
			    printf("%d",a[n/2+1]);
			}
			
		

	

	return 0;
}
