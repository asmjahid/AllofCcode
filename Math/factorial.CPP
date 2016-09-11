#include<stdio.h>

main()
{
    long long int i,n,result=1;
    printf("value=");
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("result=%lld",result);
    return 0;
}
