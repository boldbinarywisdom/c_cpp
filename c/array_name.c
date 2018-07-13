/* The name of an array is the same as &array[ 0 ] */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
    char array[ 5 ]; /* define an array of size 5 */

    printf( "\narray = %p\n&array[0] = %p\n&array = %p\n",
            array, &array[ 0 ], &array );

    return 0; /* indicate program ended successfully */

} /* end main */
