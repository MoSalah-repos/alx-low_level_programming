#include <stdio.h>

/**
 * main - prints the alphabet letters in lowercase,
 * followed by a new line, except q and e
 * Return: 0 if executed correctly, non-zero otherwise
 */
int main(void)
{
	char alpha  = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
