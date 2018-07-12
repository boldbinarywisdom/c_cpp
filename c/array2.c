/* initializing an array with an initializer list*/
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
    /* use initializer list to initialize array n */
    int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
    int i; /* counter */

    printf( "%s%13s\n", "Element", "Value" );

    /* output contents of array n in tabular format */
    for ( i = 0; i < 10; i++) {
        printf( "%7d%13d\n", i, n[ i ] );
    }/* code */
    return 0; /* indicate program ended successfully */

} /* end main */
