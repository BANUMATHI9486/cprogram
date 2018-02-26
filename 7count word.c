#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0;
    char a[60]="green world is beautiful";
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        count++;
    }
    printf("%d",count+1);
    return 0;
}
