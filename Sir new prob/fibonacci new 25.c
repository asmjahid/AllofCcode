#include<stdio.h>
int fibonacci(int);
main()
{
int i=0,n,c;
printf("enter N:");
scanf("%d",&n);
for(c=1;c<=n;c++)
{
    printf("%d\t",fibonacci(i));
    i++;
}
return 0;
}
int fibonacci(int n)
{
    if
    (n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fibonacci (n-1)+fibonacci (n-2));
}
