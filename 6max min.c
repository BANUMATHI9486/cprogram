#include<stdio.h>
int main()
{
    int max,min,a[25],i,n;
    printf("enter the no \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    
    {
        scanf("%d",&a[i]);
        min=max=a[0];
        for(i=0;i<n;i++)
        {
      if(a[i]>max)
      {
        max=a[i];
        }
    if(a[i]<min)
    {
        min=a[i];
    }
      printf("the max no = %d\n ",max);
        printf("the min no = %d\n ",min);
    }   
    }
return 0;
}
