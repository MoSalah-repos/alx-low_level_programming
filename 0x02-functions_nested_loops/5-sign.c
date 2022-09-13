#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @num: the int integer to be tested, it can be negative or positive
 * Description: print +, 0, or - depending on sign of a number
 * Return: 1 if +ve, 0 if 0, and -1 if -ve
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
