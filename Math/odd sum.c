#include<stdio.h>
void main()
{
   int n,i,odd=0,sum;
   printf("enter the value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
{
      if(i%2==0)
      sum=odd+i;
}
      printf("odd numbers is %d",sum);
}
