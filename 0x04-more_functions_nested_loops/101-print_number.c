#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @num1: integer number to be printed
 */

void print_number(int num1)
{
	unsigned int num2;

	if (num1 < 0)
	{
		num2 = -num1;
		_putchar('-');
	} else
	{
		num2 = num1;
	}

	if (num2 / 10)
	{
		print_number(num2 / 10);
	}

	_putchar((num2 % 10) + '0');
}
