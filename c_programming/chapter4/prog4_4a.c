// A program that asks user to input value for triangular number

#include <stdio.h>


int main (void)
{
	int n, number, triangularNumber;


	printf ("What triangular number do you want? ");
	scanf ("%i", &number);

	printf ("Table of Triangular Numbers\n\n");
        printf (" n     Sum from 1 to %i\n", number);

	triangularNumber = 0;


	for ( n = 1; n <= number; ++n )
		triangularNumber +=n;
	printf (" %i			%i\n", number, triangularNumber);
	printf ("Triangular number %i is %i\n", number, triangularNumber);


	return 0;
}
