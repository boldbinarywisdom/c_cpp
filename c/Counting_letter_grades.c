/* Counting letter grades */
#include <stdio.h>
/* function main begins program execution */
int main( void )
{
    int grade; /* one grade */
    int aCount = 0; /* number of As */
    int bCount = 0; /* number of Bs */
    int cCount = 0; /* number of Cs */
    int dCount = 0; /* number of Ds */
    int fCount = 0; /* number of Fs */

    printf( "Enter the letter grades. \n" );
    printf( "Enter the EOF character to end input.\n" );

    /* loop until user types end-of-file key sequence */
    while( ( grade = getchar() ) != EOF ){
        /* determine which grade was input */
        switch( grade ){ /* switch nested in while */
            case 'A': /* grade was uppercase A */
            case 'a': /* or lower case a */
                ++aCount; /* increment aCount */
                break; /* necessary to exit switch */

            case 'B': /* grade was uppercase B */
            case 'b': /* or lower case b */
                ++bCount; /* increment bCount */
                break; /* necessary to exit switch */

            case 'C': /* grade was uppercase C */
            case 'c': /* or lower case c */
                ++cCount; /* increment cCount */
                break; /* necessary to exit switch */

            case 'D': /* grade was uppercase D */
            case 'd': /* or lower case d */
                ++dCount; /* increment dCount */
                break; /* necessary to exit switch */

            case 'F': /* grade was uppercase F */
            case 'f': /* or lower case f */
                ++fCount; /* increment fCount */
                break; /* necessary to exit switch */

            case '\n': /* ignore newlines */
            case '\t': /* tabs, */
            case ' ': /* ans spaces in input */
                break; /* necessary to exit switch */

            default: /* catch all other characters */
                printf( "Incorrect letter grade entered." );
                printf( "Enter a new grade.\n" );
                break; /* optional: will exit switch anyway */
        }/* End switch */

    } /* End while */

    /* output summary of results */
    printf( "\nTotals for each letter grade are:\n" );
    printf( "A: %d\n", aCount ); /* dsplay number of A grades*/
    printf( "B: %d\n", bCount ); /* dsplay number of B grades*/
    printf( "C: %d\n", cCount ); /* dsplay number of C grades*/
    printf( "D: %d\n", dCount ); /* dsplay number of D grades*/
    printf( "F: %d\n", fCount ); /* dsplay number of F grades*/

    return 0; /* indicate program ended successfully */

} /* end function main */
