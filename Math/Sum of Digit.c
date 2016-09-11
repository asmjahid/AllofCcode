#include<stdio.h>
   void main()
   {
     int n,num,x,sum=0;
     printf("Enter a number=");
     scanf("%d",&n);
     while(n>0)
     {
       x=n%10;
       sum=sum+x;
       n=n/10;
     }
     printf("Sum of digits of a number=%d",sum);
   }
