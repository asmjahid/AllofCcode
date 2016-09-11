#include <stdio.h>
   void main()
   {
     int a,b;
     printf("Enter number1: ie a");
     scanf("%d",&a);
     printf("Enter number2:ie b ");
     scanf("%d",&b);
     printf("value of a and b before swapping is a=%d,b=%d",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("value of a and b after swapping is a=%d,b=%d",a,b);
   }
