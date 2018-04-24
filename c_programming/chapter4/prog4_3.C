// Program to generate a table of triangle numbers


#include <stdio.h>
{
	int n, triangularNumber;


	printf ("Table of Triangular Numbers\n\n");
	printf (" n	Sum from 1 to n\n");
	printf ("---	---------------\n");

	triangleNumber = 0;

	for (n = 1; n <= 10; ++n) {
		trianglularNumber += n;
		printf (" %i		%i\n", n, triangularNumber);
	}


	return 0;
}
