
#include "main.h"
/*
 * print_alphabet: is a fuction that prints the alphabet
 * in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
