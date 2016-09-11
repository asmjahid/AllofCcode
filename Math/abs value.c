#include <stdio.h>
#include <math.h>
int main()
{
  int n, result;
  printf("Enter an integer to calculate it's absolute value\n");
  scanf("%d", &n);
  result = abs(n);
  printf("Absolute value of %d = %d\n", n, result);
  getch();
  return 0;
}
