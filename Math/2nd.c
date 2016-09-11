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
float cose(float x)
{
    int i,j,sign,fact;
    float sum,y1,y2;
    x=(3.1416*x)/180;
    sum=1;
    sign=-1;
    for(i=2;i<10;i=i+2)
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
/*int workspace(int x)
{
    int i,j,b;
    float c,sum=1.0,fact;
    for(i=1;i<x;i++)
    {
        fact=1.0;
        for(j=1;j<=i;j++)
        fact=fact*j;
    }
    b=pow(x,i);
    c=b/fact;
    sum=sum+c;
    printf("%f",sum);
}*/
main()
{
    float sum1,sum2,sum3,a;
    printf("enter the value: ");
    scanf("%f",&a);
    sum1=sine(a);
    sum2=cose(a);
   printf("%.3f\n%.3f",sum1,sum2);
}
