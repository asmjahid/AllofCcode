#include <stdio.h>
   #include <conio.h>
   void main()
   {
     int num1, num2, gcd, lcm, remainder, numerator, denominator;
     printf("Enter two numbers\n");
     scanf("%d %d", &num1,&num2);
     if (num1 > num2)
     {
       numerator = num1;
       denominator = num2;
     }
     else
     {
       numerator = num2;
       denominator = num1;
     }
     remainder = num1 % num2;
     while(remainder !=0)
     {
       numerator = denominator;
       denominator = remainder;
       remainder = numerator % denominator;
     }
     gcd = denominator;
     lcm = num1 * num2 / gcd;
     printf("GCD of %d and %d = %d \n", num1,num2,gcd);
     printf("LCM of %d and %d = %d \n", num1,num2,lcm);
   }
