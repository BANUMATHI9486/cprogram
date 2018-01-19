#include<stdio.h>
int main()
{
    int n,i,c;
    printf("enter the number,c ");
    scanf("%d%d",&n,&c);
    
    for(i=1;i<=c;++i)
{
    printf("%d*%d=%d",n,i,n*i);
    }
    
}
