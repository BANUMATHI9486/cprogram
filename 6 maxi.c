#include<stdio.h>
int main()
{
    int i,maxi,a[10],b;
    printf("enter the number \n");
    scanf("%d",&b);
    maxi=a[0];
    for(i=1;i<b;i++)
    {
        scanf("%d",&a[i]);
        

    }
    for(i=1;i<b;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
    }
    
        printf("the maximum no is %d \n",maxi);
    
       
        return 0;
    
    
}
