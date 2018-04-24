// Write a program that evaluates the following expression and displays the results
// Remember to use exponential format to display the result
// (3.31 * 10^-8 * 2.01 * 10^-7) / (7.16 * 10^-6 + 2.01 * 10^-8)

#include <stdio.h>
#include <math.h>

int main (void)
{

//	float answer;

	double a;
	a = pow(10, -8);
	double b;
	b = pow(10, -7);
	double c;
	c = pow(10, -6);
	double d;
	d = pow(10, -8);

	printf("(3.31 * %i * 2.01 * %i)\n", a, b, c, d);

	return 0;
}
