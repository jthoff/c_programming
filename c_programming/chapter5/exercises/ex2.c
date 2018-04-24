/* Write a program that asks the user to type in two integer values
at the terminal.  Test these two numbers to determine if the first 
is evenly divisibe by the second, and then display an appropriate
message at the terminal.
*/
#include <stdio.h>

int main (void)
{
	int num1, num2, remainder;

	printf ("Enter an integer: \n");
	scanf ("%i", &num1);

	printf ("Enter a second integer: \n");
	scanf ("%i", &num2);

	remainder = num1 % num2;

	// If (num1 / num2) % 0 THEN TRUE ELSE FALSE	
	if ( remainder != 0 )
		printf ("%i and %i do not divide evenly.\n The remainder is %i.\n", num1, num2, remainder);
	else
		printf ("%i and %i divide evenly.\nThe remainder is %i.\n", num1, num2, remainder);

	return 0;
}
