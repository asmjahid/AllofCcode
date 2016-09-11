#include <stdio.h>
main()
{
      float c, f;
      printf(" Enter temp in centigrade: ");
      scanf("%f", &c);
      f = ( 1.8 * c ) + 32;
      printf(" Temperature in Fahrenheit = %f", f);
      return 0;
}
