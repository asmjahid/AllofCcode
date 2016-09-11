#include <stdio.h>
   #include <conio.h>
   #include <math.h>
   #include <stdlib.h>
   void main()
   {
     int n, x1;
     float acc, term, den, x, sinx=0, sinval;
     clrscr();
     printf("Enter the value of x (in degrees)\n");
     scanf("%f",&x);
     x1 = x;
     /* Converting degrees to radians*/
     x = x*(3.142/180.0);
     sinval = sin(x);
     printf("Enter the accuary for the result\n");
     scanf("%f", &acc);
     term = x;
     sinx = term;
     n = 1;
     do
     {
       den = 2*n*(2*n+1);
       term = -term * x * x / den;
       sinx = sinx + term;
       n = n + 1;
     } while(acc <= fabs(sinval - sinx));
     printf("Sum of the sine series = %f\n", sinx);
     printf("Using Library function sin(%d) = %f\n", x1,sin(x));
   }
