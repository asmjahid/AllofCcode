#include<stdio.h>

main()
{
    int a,b,x,y,t,lcm;
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
    lcm=(x*y)/a;
    printf("lcm=%d",lcm);
    return 0;
}
