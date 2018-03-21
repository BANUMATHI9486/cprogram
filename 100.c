#include<stdio.h>
void main()
{
    int n,i,a,pro=1;
    
    printf("enter the range\n");
     scanf("%d",&n);
    printf("enter the number\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        pro=pro*a;
    }
   printf("the product is %d\n",pro);
}
