#include<stdio.h>
#include<string.h>

void main()
{
    char u[90],g;
    int h;
    printf("enter the string");
    scanf("%s",u);
    h=strlen(u);
    g=h/2;
    u[g]='*';
    printf("%s",u);
    
}
