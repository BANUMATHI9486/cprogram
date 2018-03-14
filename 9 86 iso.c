#include<stdio.h>
#include<string.h>

int main()
{
    char a[90];
    int flag=0,i;
    printf("enter the array\n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }
    return 0;
}
