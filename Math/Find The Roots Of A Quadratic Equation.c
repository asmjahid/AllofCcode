#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, d, realp, imgp, r1, r2;
    printf(" Enter the 3 numbers\n ");
    scanf(" %f %f %f " ,&a, &b, &c);
    if ( a == 0 || b == 0 || c == 0 )
    {
        printf(" Error input only non zero numbers\n ");
    }
    else
    {
        d = b * b - 4 * a * c;
        if ( d == 0 )
        {
            printf(" Roots are equal\n ");
            r1 = r2 = - b / ( 2 * a );
            printf(" Root1 = %f, Root2 = %f ", r1, r2 );
        }
        else if(d>0)
        {
            printf( "Roots are real & distinct\n" );
            r1 = ( - b + sqrt ( fabs ( d ) ) ) / ( 2 * a );
            r2 = ( - b - sqrt ( fabs ( d ) ) ) / ( 2 * a );
            printf(" Root1 = %f, Root2 = %f", r1, r2);
        }
        else
        {
            printf(" Roots are imaginary\n ");
            realp = - b / ( 2 * a );
            imgp = sqrt ( fabs ( d ) ) / ( 2 * a );
            printf(" Root1 = %f + i%f, Root2 = %f - i%f ",realp, imgp, realp, imgp);
        }
    }
}
