#include<stdio.h>
int main()
{
    int i,j,n,a[10],t,b,c;
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
    printf("%1d\t",a[i]);
    b=n/2+1;
    c=((n/2)+(n/2+1))/2;
    if(n%2==0)
    {
        printf("the middle elemaent is %d\n",c);
    }
    else
    {
        printf("the middle element is %d\n",b);
    }
    return 0;
}
