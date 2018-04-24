/* Write a program that generates a table of triangular numbers using this formula:
   triangularNumber = n (n + 1) / 2
  
   For example, the 10th triangular number, 55, can be generated by substituting 10 as the value for n in the preceding formula.  Write a program that generates a table of triangular numbers using
   the preceding formula.  Have the program generate every fifth triangular number
   between 5 and 50 (5,10, 15, 20, ...)
*/
#include <stdio.h>


int main (void)
{
	int n, triangularNumber;

		printf ("Table of Triangular Numbers\n\n");
		printf (" 5 to 50 in increments of 5\n");
		printf ("-----------------\n");


		triangularNumber = 0;
// The += or -= operator allows iterations by whatever number is added
// e.g.(n += 5) generates multiples of 5

		for ( n = 5; n <= 50; n += 5 ) {
			
			triangularNumber = n;

		printf (" %-2i\n\n",triangularNumber);

		}

	return 0;
}

