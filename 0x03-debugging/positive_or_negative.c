#include <stdio.h>

/**
 * positive_or_negative - assigns a random number to int variable n each time
 * it executes, and prints it
 * @n: The number to be tested
*/

void positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
