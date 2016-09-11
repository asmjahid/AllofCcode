#include<stdio.h>
main()
{
    int feet,inch,in;
    float m;
    printf("Enter your height in feet= ");
    scanf("%d",&feet);
    printf("Enter your height in inch= ");
    scanf("%d",&inch);
    in=((feet *12)+inch);
    m=in*0.0254;
    printf("%f",m);
}
