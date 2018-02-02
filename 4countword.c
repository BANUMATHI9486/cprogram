#include<stdio.h>
int main()
{
    int i,count=0;
    char a[92]="little girl";
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]==' ')  
     count++;   
    }
    printf("the no of words %d",count+1);
    
    return 0;
}
