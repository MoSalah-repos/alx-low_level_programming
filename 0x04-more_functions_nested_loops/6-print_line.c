#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times the character '_' should be printed
 * Return: a straight line in the terminal
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count;

		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
