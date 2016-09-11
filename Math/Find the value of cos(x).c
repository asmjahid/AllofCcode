#include <stdio.h>
   #include <conio.h>
   #include <math.h>
   #include <stdlib.h>
   void main()
   {
     int n, x1;
     float acc, term, den, x, cosx=0, cosval;
     clrscr();
     printf("Enter the value of x (in degrees)\n");
     scanf("%f",&x);
     x1 = x;
     /* Converting degrees to radians*/
     x = x*(3.142/180.0);
     cosval = cos(x);
     printf("Enter the accuary for the result\n");
     scanf("%f", &acc);
     term = 1;
     cosx = term;
     n = 1;
     do
     {
       den = 2*n*(2*n-1);
       term = -term * x * x / den;
       cosx = cosx + term;
       n = n + 1;
       } while(acc <= fabs(cosval - cosx));
     printf("Sum of the cosine series = %f\n", cosx);
     printf("Using Library function cos(%d) = %f\n", x1,cos(x));
   }
