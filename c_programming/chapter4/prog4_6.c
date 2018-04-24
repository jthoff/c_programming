// Program to introduce the while statement
/*	while (expression) = TRUE the program executes
		program statement
*/
#include <stdio.h>


int main (void)
{
	int count = 1;

	while ( count <= 5 ) {
		printf ("%i\n", count);
		++count;
	}
	return 0;
}
