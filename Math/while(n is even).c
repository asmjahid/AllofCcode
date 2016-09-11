#include<stdio.h>
main()
{
    int sum=0,i=2,n;
    scanf("%d",&n);
    if(n%2==0)
    {
        while(i<=n)
    {
        sum=sum+i*i;
        i=i+2;
    }
    printf("%d",sum);
    }
    else
    {
        printf("The number is not even");
    }
    return 0;
}
