#include<stdio.h>
#include<string.h>
void main()
{
    int b,i,count=0;
    char a[90]="greekton hummy";
    b=strlen(a);
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]==' ')
        count++;
    }
    printf("the no of words in a element %d",b-count);
}
