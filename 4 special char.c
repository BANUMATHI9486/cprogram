#include<stdio.h>
void main()
{
    int i,count=0;
    char a[90]="hai!how are u?i am fn.";
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'||a[i]=='*'||a[i]=='&'||a[i]=='('||a[i]==')'||a[i]=='<'||a[i]=='>'||a[i]==';'||a[i]==':'||a[i]==','||a[i]=='.'||a[i]=='?'||a[i]=='"'||a[i]=='/')
        count++;
    }
    printf("%d",count);
}
