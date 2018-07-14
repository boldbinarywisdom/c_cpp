/* Cube a variable using call-by-value */
#include <stdio.h>

void cubeByReference( int *nPtr ); /* prototype */

/* function main begins program execution */
int main( void )
{
    int number = 5; /* initialize number */

    printf( "The original value of number is %d", number );

    /* pass number by value to cubeByValue */
    cubeByReference( &number );

    printf( "\nThe new value of number is %d\n", number );

    return 0; /* indicate program ended successfully */

} /* end main */

/* calculate cube of *nPtr;modifies variable number in main */
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr; /* cube *nPtr */
} /* end function cubeByReference */
