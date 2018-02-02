#include<stdio.h>
#include<string.h>
void main()
{
    int i,count=0;
    char g[90]="greekton hummy";
    for(i=0;g[i]!=0;i++)
    {
        if(g[i]==' ')
        count++;
    }
    printf("the no of gap between the words %d",count);
}
