#include<stdio.h>
void main()
{
    int n,b=0,t,a;
    printf("Enter the no");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        a=n%10;
        b=b+a*a*a;
        n=n/10;
    }
    if(b==t)
    {
        printf("Armstrong no");
    }
    else
    {
        printf("Not an armstrong no");
    }
}
