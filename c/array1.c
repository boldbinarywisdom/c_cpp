/* initializing an array */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
    int n[ 10 ]; /* n is anarray of 10 integers */
    int i; /* counter */

    /* initialize elements of array */
    for ( i = 0; i < 10; i++ ) {
        n[ i ] = 0; /* set element at location i to 0 */
    } /* end for */

    printf( "%s%13s\n", "Element", "Value" );

    /* output contents of array n in tabular format */
    for ( i = 0; i < 10; i++) {
        printf( "%7d%13d\n", i, n[ i ] );
    }/* code */
    return 0; /* indicate program ended successfully */

} /* end main */
