#include<stdio.h>
int main()
{
    int i,j,n,a[i],t;
    printf("enter the range\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
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
    for(i=0;i<=n;i++)
    printf("%1d",a[i]);
    return 0;
}
