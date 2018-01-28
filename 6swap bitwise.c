
#include<stdio.h>
void main()
{
    int u=5,v=7;
    printf("before swaping %d %d",u,v);
    
    u=u^v;
    v=u^v;
    u=u^v;
    
    printf("after swaping two numbers %d %d",u,v);
    
    }
