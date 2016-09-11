#include<stdio.h>
main()
{
int i,sum=0,odd,x;
printf("n:");
scanf("%d",&x);
for(i=1,odd=1;i<=2*x-1;i++,odd=odd+2)
{
if(i%2 ==0)
sum=sum+ odd;
}
printf("Sum of odd no = %d",sum);
}
