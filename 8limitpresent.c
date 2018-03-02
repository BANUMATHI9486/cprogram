#include<stdio.h>
void main()
{
    int a,m,n,c=0,i;
    printf("enter the number\n");
    scanf("%d",&a);
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(a<m||a>n)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
