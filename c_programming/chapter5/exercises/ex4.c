// Write a program that acts a simple "printing" calculator.
// The program should allow the user to type in expressions of the form
// number operator
// The following operators should be recognized by the program:
// + - / * S E

#include <stdio.h>

int main (void)
{
	float number1, result;
	char operation;
	printf("Being Calculations: \n");
	do {
	  printf ("Enter the number and the operation. \n");
	  printf ("Use S to set a number or E to exit: ");
	  scanf ("%f %s", &number1, &operation);

	switch (operation) {

	case 'S':
	  result = number1;
	  printf ("%.2f\n", result);
	break;

	case '+':
	  result = number1 + number1;
	  printf ("%.2f\n", result);
	break;

	case '-':
	  result = number1 - number1;
	  printf ("%.2f\n", result);
	break;

	case '*':
	  result = number1 * number1;
	  printf ("%.2f\n", result);
	break;

	case '/':
	  result = number1 / number1;
	  printf ("%.2f\n", result);
	break;

	case 'E':
	printf ("End program.\n");
	break;
	
	default:
	  printf("Unknown operator.\n");
	  break;
	}
    } while (operation != 'E');
	return 0;
}

