

#include <stdio.h>
#include <math.h>

int main()
{
  double n, result;

  printf("Enter a number to calculate it's log(base is 10)\n");
  scanf("%lf", &n);

  result = log10(n);

  printf("Common log of %.2lf = %.2lf\n", n, result);

  return 0;
}
