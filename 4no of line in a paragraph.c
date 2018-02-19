#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char a[90]="gud eve to one and all.analye ur performance.";
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        count++;
        
    }
    printf("%d",count);
    return 0;
}
