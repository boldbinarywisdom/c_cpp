/* Using the do...while repetition statement */
#include <stdio.h>
/* function main begins program execution */
int main( void )
{
    int counter = 1; /* initialize counter */

    do{
        printf( "%d\n", counter ); /* display counter */
    }while ( ++counter <= 10 );  /* end do...while */

    return 0; /* indicate program ended successfully */

} /* end function main */
