#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @num: the number used to find the last digit of.
 * Return: the value of the last digit.
 */
int print_last_digit(int num)
{
	if (num < 0)
		num = -num;
	_putchar((num % 10) + '0');
	return (num % 10);
}
