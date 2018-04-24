// A program to reverse the digits of a number (revised)

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	int number, right_digit;
	bool isNegative = false;

	printf ("Enter your number.\n");
	scanf ("%i", &number);
// BUG - program prints out an extra digit e.g. (input "89" - output "988"
	do {
	     right_digit = number % 10;
	     printf ("%i", right_digit);
	     number = number / 10;
	 if ( number < 0 )
         right_digit = -number;
         printf("%i", right_digit);

	}
	while ( number != 0 );

	}

	return 0;
}
