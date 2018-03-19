#include<stdio.h>

int main() 
{
    int n,i,m,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("enter the number");
 
    for(i=0;i<n;i++)
    {
         scanf("%d",&m);
        sum=sum+m;
    }
    printf("sum of numbers %d",sum);
    
}
