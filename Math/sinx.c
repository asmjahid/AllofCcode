#include <stdio.h>
#include <math.h>

int main()
{
  double result, x = M_PI/6;

  result = sin(x);

  printf("The sin(%lf) = %.2lf\n", x, result);

  return 0;
}
