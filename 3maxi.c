#include<stdio.h>
int main()
{
    int i,max,a[10],n;
    printf("enter the number \n");
    scanf("%d",&n);
    max=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
        

    }
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    
        printf("the maximum no is %d \n",max);
    
       
        return 0;
    
    
}
