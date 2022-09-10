#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: 0 if executed correctly, non-zero otherwise
 */

int main(void)
{
	int n;

	for (n = 25; n < 35; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
