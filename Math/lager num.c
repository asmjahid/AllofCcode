//Is it possible to check largest among two numbers without using if statement.... Yes... it is possible. See the program how its works
#include<stdio.h>
main()
{
int a,b,c;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
c=a>b?a:b;
printf("The largest number is %d",c);
}
