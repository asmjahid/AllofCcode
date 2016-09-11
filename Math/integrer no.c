//Code for Program illustrates the output of integer numbers under various formats in C Programming
#include<stdio.h>
   main()
   {
       int m = 12345;
       long n = 987654;

       printf("%d\n",m);
       printf("%10d\n",m);
       printf("%010d\n",m);
       printf("%-10d\n",m);
       printf("%10ld\n",n);
       printf("%10ld\n",-n);
   }
