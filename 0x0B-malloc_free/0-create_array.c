#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: the size of the array to be created
 * @c: char to be initialized
 * Return: char pointer to malloc created (Success) or NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(*ar));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
