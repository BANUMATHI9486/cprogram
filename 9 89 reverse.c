#include<stdio.h>
#include<string.h>
int main()
{
    char a[90];
    int n,i;
    printf("enter the character");
    scanf("%s",&a);
    n=strlen(a);
    for(i=n-1;i>0;i--)
    {
        printf("%c",a[i]);
    }
}
