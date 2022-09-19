#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first input value
 * @b: pointer to second input value
 * c: the temporary value used to switch between the two inputs
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
