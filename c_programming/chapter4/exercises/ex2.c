// Write a program to generate and display a table of n and n^2,
// for integer values of n ranging from 1 to 10.
// Be certain to print appropriate column headings

#include <stdio.h>
#include <math.h>


int main (void)
{
	int n, n_squared;
	double pow(n, 2);

	n_squared = pow(n, 2);


	printf ("Table of n to n squared\n\n");
	printf ("n	Sum from 1 to 10\n");
	printf ("---	---------------\n");


	for ( n = 1; n <= 10; ++n ) {
		n_squared += n;
		printf (" %i		%i\n", n, n_squared);
	}
	return 0;
}
