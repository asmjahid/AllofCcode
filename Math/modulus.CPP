#include<stdio.h>

main()
{
    int n,x,y,sum=0;
    printf("value=");
    scanf("%d",&n);
    while(x!=0)
    {
        x=n%10;
        y=n/10;
        sum=sum+x;
        n=y;
    }
    printf("%d",sum);
    return 0;
}
