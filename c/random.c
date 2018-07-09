/* Shifted, scaled integers produced by 1 + rand() % 6 */
#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main( void )
{
    int i; /* counter */

    /* loop 20 times */
    for ( i = 1; i <= 20; i++ ) {
        /* pick random number from 1 to 6 and output it */
        printf( "%10d ", 1 + ( rand() % 6 ) );  /* rand() % 6  will produce integers in the range of 0 to 5. this is scaling. 6 is scaling factor */

        /* if counter is divisible by 5, begin new line of output */
        if ( i % 5 == 0 ){
            printf( "\n" );
        } /* end if */

    } /* end for */

    return 0; /* indicate program ended successfully */

} /* end function main */
