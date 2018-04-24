// A program to evaluate simple expressions in the format
// number operator number (2 + 2)
// And switch statements to handle multiple test cases

#include <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;

	printf ("Type in your expression.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);

	switch (operator)
	{
		case '+':
		printf ("%.2f\n", value1 + value2);
		break;

		case '-':
		printf ("%.2f\n", value1 - value2);
		break;

		case '*':
		printf ("%.2f\n", value1 * value2);
		break;

		case '/':
		  if ( value2 == 0 )
			printf ("Cannot divide by zero.\n");
		  else
			printf ("%.2f\n", value1 / value2);
		break;

		default:
		  printf ("Unknown operator.\n");
		break;
	}

	return 0;
}

