#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three values\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Smallest value is= ");
if (a<b)
{
    if(a<c)
    printf("%d\n",a);
    else
    printf("%d\n",c);
}
else
{
    if (c<b)
    printf("%d\n",c);
    else
    printf("%d\n",b);
}
}
