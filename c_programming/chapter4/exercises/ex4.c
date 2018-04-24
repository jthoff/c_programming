// Write a program to generate and print a table of the first 10 factorials using this formula:
// n! = +n
// e.g.   5! = 5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>
int main (void)
{
	int tris, n, number, triangularNumber, counter;
	printf ("How many numbers do you want to check?" );
	scanf ("%i", &tris);
	for ( counter = 1; counter <= tris; ++counter ) {
		printf ("What triangular number do you want? ");
		scanf ("%i", &number);
		triangularNumber = 0;
	}
	for ( n = 1; n <= 10; ) {
		triangularNumber += n;
		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}
	return 0;
}
