#include <stdio.h>
#include <math.h>

int main()
{
  double n, result;

  printf("Enter a number to round it down\n");
  scanf("%lf", &n);

  result = floor(n);

  printf("Original number =  %.2lf\n", n);
  printf("Number rounded down = %.2lf\n", result);

  return 0;
}
