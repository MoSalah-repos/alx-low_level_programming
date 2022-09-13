#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @num: the number used to find the last digit of.
 * Return: the value of the last digit.
 */
int print_last_digit(int num)
{
	int last;

	if (num < 0)
		num = -num;

	last = num % 10;

	if (last < 0)
		last = -last;

	_putchar(last + '0');
	return (last);
}
