#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase
 * for 10 times
 * Return: 0 if executed correctly, non-zero otherwise
 */
void print_alphabet_x10(void)
{
	int count;
	char alpha;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
