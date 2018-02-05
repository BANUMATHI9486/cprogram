#include<stdio.h>
int main()
{
    int i,j,max,n,a[10];
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    max=a[0];
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>max)
            max=a[i];
            
        }
    }

printf("tne maximum no is %d ",max);
return 0;
}
