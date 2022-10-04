#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates or copy a string given as a parameter using malloc
 * @str: string to be duplicated
 *
 * Return: Pointer to a the duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
