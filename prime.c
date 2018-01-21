#include<stdio.h>
int main()
{
    int flag=0,i,n;
    printf("enter the no");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==0)
    
    printf("the no is prime %d",n);
    else
    
        printf("the no is not prime %d",n);
    
}
