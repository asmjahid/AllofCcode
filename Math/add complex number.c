#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex a, b, c;
    printf(" Enter a and b where a + ib is the first complex number. ");
    printf("\n a = ");
    scanf(" %d ", &a.real);
    printf(" b = ");
    scanf(" %d ", &a.img);
    printf(" Enter c and d where c + id is the second complex number. ");
    printf("\n c = ");
    scanf(" %d ", &b.real);
    printf(" d = ");
    scanf(" %d ", &b.img);
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    if ( c.img >= 0 )
        printf(" Sum of two complex numbers = %d + %di ", c.real, c.img);
    else
        printf(" Sum of two complex numbers = %d %di ", c.real, c.img);
    return 0;
}
