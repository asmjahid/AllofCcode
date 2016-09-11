#include<stdio.h>

main()
{
    int a,b,x,y,t,gcd;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
        a=x;
        b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    printf("gcd=%d",gcd);
    return 0;
}
