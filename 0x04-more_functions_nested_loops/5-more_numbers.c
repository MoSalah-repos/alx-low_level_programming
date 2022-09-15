#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: from 0 to 14 for  10 times.
 */
void more_numbers(void)
{
	int count, out;

	for (count = 0; count < 10; count++)
	{
		for (out = 0; out <= 14; out++)
		{
			if (out >= 10)
			{
				_putchar((out / 10) + '0');
			}
			_putchar((out % 10) + '0');
		}
		_putchar('\n');
	}
}
