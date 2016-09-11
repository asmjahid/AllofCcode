#include <stdio.h>
#include <math.h>
int main()
{
  double n, result;
  printf("Enter a number to round it up\n");
  scanf("%lf", &n);
  result = ceil(n);
  printf("Original number =  %.2lf\n", n);
  printf("Number rounded up = %.2lf\n", result);
  return 0;
}

