#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *tmp;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	tmp = mem;

	for (index = 0; index < (size * nmemb); index++)
		tmp[index] = '\0';

	return (mem);
}