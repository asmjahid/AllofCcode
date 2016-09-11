

#include <stdio.h>
#include <math.h>

int main()
{
  double n, result;

  printf("Enter a number to calculate it's natural log (base is e)\n");
  scanf("%lf", &n);

  result = log(n);

  printf("Natural log of %.2lf = %lf\n", n, result);

  return 0;
}
