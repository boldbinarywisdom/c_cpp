/* Counter-controlled repetition */
#include <stdio.h>
/* function main begins program execution */
int main( void )
{
    int counter; /* define counter */

    /* initialization, repetition condition, and preincrement
       are all included in the for statement header */
    for ( counter = 1; counter <= 10; counter++ ) {
        printf( "%d\n", counter ); /* display counter */
    } /* end for */

    return 0; /* indicate program ended successfully */

} /* end function main */
