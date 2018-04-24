// A program which converts Farenheit to Celsius
#include <stdio.h>
int main (void)
{

	int farenheit;
        int celsius;

	printf ("Please enter degrees in Farenheit: ");
	farenheit = getchar();
	//scanf("%s", farenheit);
        celsius = (farenheit - 32) / 1.8;
        printf ("\n%c degrees farenheit is %i celsius.\n", farenheit, celsius);

        return 0;
}
//Output Errors:
// Farenheit variable prints only 1 integer
// Celsius variable doesn't handle negative integers

