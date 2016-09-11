#include<stdio.h>
main()
{
    int i=2,j=1,n,sqr=0;
    float sum=0,div=0,x;
    scanf("%d",&n);
    while( i<=n)
    {
        sqr=i*i;
        div=j*j;
        x=sqr/div;
        i=i+2;

        j=j+2;
        sum=sum+x;
    }
    printf("SUM=%f",sum);
}
