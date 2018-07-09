/* Finding the maximum of three integers */
#include <stdio.h>

int maximum( int x, int y, int z );  /* function prototype */

/* function main begins program execution */
int main( void )
{
    int number1; /* first integer */
    int number2; /* second integer */
    int number3; /* third integer */

    printf( "Enter three integers: " );
    scanf( "%d%d%d", &number1, &number2, &number3 );

    /* number1, number2 and number3 are arguments
       to the maximum function */
    printf( "%d ", maximum( number1, number2, number3 ) );

    printf( "\n" );

    return 0; /* indicate program ended successfully */

} /* end function main */

/* function maximum definition
   x, y and z are parameters */
int maximum( int x, int y, int z )
{
    int max = x; /* assume x is the largest */

    if ( y > max ){ /* if y is larger than max, assign y to max */
        max = y;
    } /* end if */

    if ( z > max ){ /* if z is larger than max, assign y to max */
        max = z;
    } /* end if */

    return max; /* returns square of y as an int */
} /* end of function square */
