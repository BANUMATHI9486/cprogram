#include<stdio.h>
int main()
{
    int flag=0,i,n,a,b;
    printf("enter the no");
    scanf("%d",&n);
    printf("enter the range 1");
scanf("%d",&a);
printf("enter the range 2");
scanf("%d",&b);
for(i=a;i<=b;i++)

    {
        if(n%2==0)
        {
            flag=1;
            break;
        }
    }
        if(flag==0)
    
    printf("the no is prime %d",n);
    
}
