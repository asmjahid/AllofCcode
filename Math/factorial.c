#include <stdio.h>
long int factorial(int n);
  void main()
  {
     int n;
     printf("Enter the number:\n");
     scanf("%d",&n);
     printf("Factorial of %d is %ld",n,factorial(n));
  }
  long int factorial(int n)
  {
     if(n<=1)
     {
        return(01);
     }
     else
     {
        n=n*factorial(n-1);
        return(n);
     }
}
