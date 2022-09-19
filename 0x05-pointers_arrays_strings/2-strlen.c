#include "main.h"
/**
 * _strlen - retunes the length of a string.
 * @s: pointer to the string of characters.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
