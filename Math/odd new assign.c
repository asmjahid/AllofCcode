#include<stdio.h>
main()
{
int i,sum=0,odd,n;
printf("n:");
scanf("%d",&n);
for(i=1,odd=1;i<=2*n-1;i++,odd=odd+2)
{
if(i%2 ==0)
sum=sum+ odd;
}
printf("Sum of odd no = %d",sum);
}
