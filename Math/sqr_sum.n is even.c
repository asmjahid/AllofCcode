#include<stdio.h>
main()
{
    int i=0,n,sum=0;
    scanf("%d",&n);
    while( i<=n)
    {
        sum=sum+i*i;
        i=i+2;
    }
    printf("SUM=%d",sum);
}
