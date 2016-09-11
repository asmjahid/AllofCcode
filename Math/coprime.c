#include<stdio.h>
main()
{
    int n,m,i,a,b;
    printf("Enter The Numbers");
    scanf("%d %d",&n,&m);
    for(i=n-1;i>=2;i--)
        {
            a=n%i;
            b=m%i;
        }
}
