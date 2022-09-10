#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * then followed by a new line
 * Return: 0 if executed correctly, non-zero otherwise
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
