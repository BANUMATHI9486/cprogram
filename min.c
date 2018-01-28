#include<stdio.h>
int main()
{
    int i,min,a[10],n;
    printf("enter the number \n");
    scanf("%d",&n);
    min=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        

    }
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    
        printf("the minimum no is %d \n",min);
    
       
        return 0;
    
    
}
