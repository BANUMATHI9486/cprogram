#include<stdio.h>

int main()
{
    int l,b,h,sa,v;
    printf("enter the values\n");
    scanf("%d%d%d",&l,&b,&h);
    sa=2*(l*b+b*h+h*l);
    v=l*b*h;
    printf("\nsurface area is %d",sa);
    printf("\nvolume is %d",v);
}
