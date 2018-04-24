// A program that accepts integer values typed in by the user.  Display the result of dividing the
// first integer by the second, to three-decimal-place accuracy.  Remember to have the program check '
// for division by zero

#include <stdio.h>

int main (void)
{
	int number1, number2, remainder;
	float result;

	printf ("Enter the first number: ");
	scanf ("%i", &number1);

	printf ("Enter the second number: ");
	scanf ("%i", &number2);

	result = number1 / number2;
	  if ( number2 == 0 )
		printf ("Number cannot be divided by zero.\n");
	printf ("%i divided by %i is %.3f\n", number1, number2, result);
	
 return 0; 
}
