#include <stdio.h>

/**
 * first - prints a sentence before the main function is executed
 *
 * Return: noting
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
