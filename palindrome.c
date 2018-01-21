 #include<stdio.h>
    int main()
    {
    	int b,d,c=0,n;
    	printf("enter the no");
    	scanf("%d",&b);
    	n=b;
    	while(n!=0)
    	{
    d=n%10;
    c=c*10+d;
    n/=10;
    }
    if(c==b)
    {
    printf("the no is polindrome%d",c);
    }
    else 
    {
    	printf("not palindrome%d",c);
    }
    return 0;
    }
