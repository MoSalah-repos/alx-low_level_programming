#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Success Always
 */

int main(void)
{
	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
	{
		if (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
