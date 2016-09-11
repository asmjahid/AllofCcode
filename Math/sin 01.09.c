#include<stdio.h>
#include<math.h>
float sine(float x)
{
    int i,j,sign,fact;
    float sum,y1,y2;
    x=(3.1416*x)/180;
    sum=x;
    sign=-1;
    for(i=3;i<10;i=i+2)
    {
        y1=pow(x,i);
        fact=1;
        for(j=1;j<=i;j++)
        fact=fact*j;
        y2=(y1/fact)*sign;
        sum=sum+y2;
        sign=(-1)*sign;
    }
    return sum;
}
main()
{
    float sum1,a;
    printf("enter the value: ");
    scanf("%f",&a);
    sum1=sine(a);
    printf("%.3f",sum1);
}
