#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @num: the number
 * Return: Nothing.
 */
void print_times_table(int num)
{
	int x, y, z;

	if (!(num > 15 || num < 0))
	{
		for (x = 0; x <= num; x++)
		{
			for (y = 0; y <= num; y++)
			{
				z = x * y;
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (z < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((z % 10) + '0');
				}
				else if (z >= 10 && z < 100)
				{
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z >= 100 && y != 0)
				{
					_putchar((z / 100) + '0');
					_putchar((z / 10) % 10 + '0');
					_putchar((z % 10) + '0');
				}
				else
					_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
