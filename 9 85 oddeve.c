#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char a[90];
    printf("enter the array\n");
        scanf("%s",a);
        n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%c\t",a[i]);
            
        }
    
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
        printf("%c\t",a[i]);
        }
    }
    return 0;
}
